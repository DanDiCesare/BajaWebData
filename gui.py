import requests
import pandas
import time
import csv
import os
import tkinter
import json
from scraperv2 import *
from tkinter.ttk import *
#scrape the whole leaderboard

##########################Variables###############################
ON = False
window = tkinter.Tk()
window.style = Style()
window.style.theme_use("default")
teams = tkinter.IntVar()
OurTeam = tkinter.IntVar()
##################################################################

def loop_start(teams, OurTeam):
    if (ON):
        start(teams.get(), OurTeam.get())
        readNextAndLast(OurTeam.get())
        #print("worked")
    window.after(4000, loop_start, teams, OurTeam)


def on_off():
    global ON 
    ON = not ON
    #print(ON)
    if (ON):
        start_button.config(text = "Stop", fg = "red")
    else:
        start_button.config(text = "Start", fg = "green")
    
#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~READ JSON~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


ourLap = "NULL"
ourTeam = "NULL"
ourTime = "NULL"

leadLap = "NULL"
leadTeam = "NULL"
leadTime = "NULL"


ourLapLabel = tkinter.Label(window, text = ourLap)
ourTeamLabel = tkinter.Label(window, text = ourTeam)
ourTimeLabel = tkinter.Label(window, text = ourTime)
ourPrompt = tkinter.Label(window, text = "Our Lap:  ")

leadLapLabel = tkinter.Label(window, text = leadLap)
leadTeamLabel = tkinter.Label(window, text = leadTeam)
leadTimeLabel = tkinter.Label(window, text = leadTime)
leadPrompt = tkinter.Label(window, text = "Lead Lap: ")

lapTitle = tkinter.Label(window, text = "LAP COUNT")
teamTitle = tkinter.Label(window, text = "TEAM NUMBER")
timeTitle = tkinter.Label(window, text = "      LAST LAP TIME")


def readJSON():
    counter = 0
    if os.path.exists("guiData.json"):
        with open('guiData.json') as json_file:
            data = json.load(json_file)
            for p in data['Team']:
                if (counter == 0):
                    ourLapLabel.config(text = p['Lap'])
                    ourTeamLabel.config(text = p['Team'])
                    ourTimeLabel.config(text = "        " + p['Time'])
                if (counter == 1):
                    leadLapLabel.config(text = p['Lap'])
                    leadTeamLabel.config(text = p['Team'])
                    leadTimeLabel.config(text = "        " + p['Time'])
                counter += 1
    window.after(10, readJSON)



e = tkinter.Entry(window, textvariable = teams)
el = tkinter.Label(window, text = "# Teams:")
t = tkinter.Entry(window, textvariable = OurTeam)
tl = tkinter.Label(window, text = "Our Team #:")


start_button = tkinter.Button(window, font='Helvetica 18 bold', text = "Start", fg = "green", command = lambda: on_off() )

start_button.grid(row = 0, column = 0)
e.grid(row = 1, column = 1)  
el.grid(row = 1, column = 0)  
t.grid(row = 2, column = 1)  
tl.grid(row = 2, column = 0)  


lapTitle.grid(row = 3, column = 1)
teamTitle.grid(row = 3, column = 2) 
timeTitle.grid(row = 3, column = 3)  

ourLapLabel.grid(row = 4, column = 1)
ourTeamLabel.grid(row = 4, column = 2) 
ourTimeLabel.grid(row = 4, column = 3)  
ourPrompt.grid(row = 4, column = 0)  

leadLapLabel.grid(row = 5, column = 1)
leadTeamLabel.grid(row = 5, column = 2) 
leadTimeLabel.grid(row = 5, column = 3)  
leadPrompt.grid(row = 5, column = 0)



window.after(0, loop_start, teams, OurTeam)
window.after(0, readJSON)

window.update_idletasks()
window.mainloop()