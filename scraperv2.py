import requests
import pandas
import time
import csv
import os
import tkinter
import json
from tkinter.ttk import *



def teamLap(teamNum):
    for line in list(open("compareLap.csv")): #find our time
        line = line.split(',')
        if (int(line[0]) == int(teamNum)):
            return int(line[1])

def hours(time):
    return int(time[10])

def minutes(time):
    return int(time[13]) + (int(time[12]) * 10)

def seconds(time):
    return int(time[16]) + (int(time[15]) * 10)

def readNextAndLast(teamNum):
    teamNum = int(teamNum)
    leadTeam = 0
    followingTeam = 0

    ourTime = ""
    leadTime = ""
    followTime = ""

    
    for line in list(open("compare.csv")): #find our time
        line = line.split(',')
        if (int(line[0]) == int(teamNum)):
            ourTime = line[1]

    leadTime = ourTime #base value
    leadTeam = teamNum

    for line in list(open("compare.csv")): #compare other times
        line = line.split(',')
        
        temp = line[1] #compare hours
        tempTeam = int(line[0]) #team number

        if (teamLap(tempTeam) >= teamLap(teamNum)):
            try:
                if (hours(temp) < hours(leadTime)):
                    leadTeam = tempTeam
                    leadTime = temp
                
                elif (hours(temp) == hours(leadTime) and minutes(temp) > minutes(leadTime)):
                    leadTeam = tempTeam
                    leadTime = temp
                
                elif ( hours(temp) == hours(leadTime) and minutes(temp) == minutes(leadTime) and seconds(temp) < seconds(leadTime)):
                    leadTeam = tempTeam
                    leadTime = temp
            except:
                pass
    #################################
    print("Lead Team:", leadTeam, "-- Time:", leadTime)
    #~~~~~~~~~~~~~~~~~~~~~~~~~~~WRITING TO JSON~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    data = {}
    data['Team'] = []
    data['Team'].append({
        'Lap': teamLap(teamNum),
        'Team': teamNum,
        'Time': str(hours(ourTime)) + ':' + str(minutes(ourTime)) + ':' + str(seconds(ourTime))
    })
    data['Team'].append({
        'Lap': teamLap(leadTeam),
        'Team': leadTeam,
        'Time': str(hours(leadTime)) + ':' + str(minutes(leadTime)) + ':' + str(seconds(leadTime))
    })

    with open ('guiData.json', 'w') as outFile:
        json.dump(data, outFile)
        
            
def readCSV(name, i):
    for line in reversed(list(open(name))):
        last_line = line.rstrip()
        last_line = last_line.split(',')
        #print("Team #" + i + "- Last lap time: ", last_line[3])

        fields = [i, last_line[2]] #3 for lap
        with open("compare.csv", 'a') as f:
            writer = csv.writer(f)
            writer.writerow(fields)
        f.close()
        break
    os.remove(name)

def findLap(name, i):
    count = 0
    for line in list(open(name)):
        count = count + 1
        last_line = line.rstrip()
        last_line = last_line.split(',')
        #print(last_line)

        if (count == 2):
            fields = [i, last_line[2]]
            with open("compareLap.csv", 'a') as f:
                writer = csv.writer(f)
                writer.writerow(fields)
            f.close()
            break
    os.remove(name)


def start(number_of_teams, teamNum):
    try :
        #while True:
        if os.path.exists("compare.csv"):
            os.remove("compare.csv")
        if os.path.exists("compareLap.csv"):
            os.remove("compareLap.csv")

        for i in range(1, number_of_teams + 1):
            team_num = str(i)
            url = "http://results.ulmidnightmayhem.com/MyResults.aspx?carnum=" + team_num + "&tab=endurance"

            page = requests.get(url).content

            try: #sort out missing tables (car did not participate)
                df_list = pandas.read_html(page) #grab table 
                #print(df_list)
                df = df_list[-1] 
                dfTeam = df_list[0]  
        
                name = "car_" + str(i) + ".csv"
                df.to_csv(name) #table to excel
                readCSV(name, team_num)

                #lap count find for our team
                dfTeam.to_csv("LapCount.csv")
                findLap("LapCount.csv", team_num)
            except:
                pass
        
        ourTeamLap = teamLap(teamNum)
        print ("\n\nOur team lap count:", ourTeamLap)

        #time.sleep(8)
        #print("\n")

    except KeyboardInterrupt:
        pass 

