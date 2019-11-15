import requests
import pandas
import time
import csv
import os
import tkinter
from tkinter.ttk import *

#change from lap time to passed at: column
#ignore teams that drop out
#count laps passed / find a way to parse that

def hours(time):
    return int(time[1]) + (int(time[0]) * 10)

def minutes(time):
    return int(time[4]) + (int(time[3]) * 10)

def seconds(time):
    return int(time[7]) + (int(time[6]) * 10)

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
    leadTeam = teamNum;

    for line in list(open("compare.csv")): #compare other times
        line = line.split(',')
        
        temp = line[1] #compare hours
        tempTeam = int(line[0]) #team number

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
        
            
def readCSV(name, i):
    for line in reversed(list(open(name))):
        last_line = line.rstrip()
        last_line = last_line.split(',')
        print("Team #" + i + "- Last lap time: ", last_line[3])

        fields = [i, last_line[3]]
        with open("compare.csv", 'a') as f:
            writer = csv.writer(f)
            writer.writerow(fields)
        f.close()
        break
    os.remove(name)


def start(number_of_teams):
    try :
        #while True:
        if os.path.exists("compare.csv"):
            os.remove("compare.csv")
        for i in range(1, number_of_teams + 1):
            team_num = str(i)
            url = "http://results.ulmidnightmayhem.com/MyResults.aspx?carnum=" + team_num + "&tab=endurance"

            page = requests.get(url).content

            try: #sort out missing tables (car did not participate)
                df_list = pandas.read_html(page) #grab table 
                print(df_list)
                df = df_list[-1]   
                print(df_list) 
                name = "car_" + str(i) + ".csv"
                df.to_csv(name) #table to excel
                readCSV(name, team_num)
            except:
                pass
        
        #time.sleep(8)
        print("\n")

    except KeyboardInterrupt:
        pass 

