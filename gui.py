import requests
import pandas
import time
import csv
import os
import tkinter
from scraperv2 import *
from tkinter.ttk import *

##########################Variables###############################
ON = False
window = tkinter.Tk()
window.style = Style()
window.style.theme_use("alt")
teams = tkinter.IntVar()
OurTeam = tkinter.IntVar()
##################################################################

def loop_start(teams, OurTeam):
    if (ON):
        start(teams.get())
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
    

e = tkinter.Entry(window, textvariable = teams)
el = tkinter.Label(window, text = "# Teams:")
t = tkinter.Entry(window, textvariable = OurTeam)
tl = tkinter.Label(window, text = "Our Team #:")


start_button = tkinter.Button(window, font='Helvetica 18 bold', text = "Start", fg = "green",command = lambda: on_off() )

start_button.grid(row = 0, column = 0)
e.grid(row = 1, column = 1) # this is placed in 0 1
el.grid(row = 1, column = 0) # this is placed in 0 1
t.grid(row = 2, column = 1) # this is placed in 0 1
tl.grid(row = 2, column = 0) # this is placed in 0 1

window.after(0, loop_start, teams, OurTeam)

window.mainloop()