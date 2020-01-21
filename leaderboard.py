import requests
import pandas
import time
import csv
import os
import tkinter
import json
from selenium import webdriver
from selenium.webdriver.support.ui import Select
from tkinter.ttk import *

def leaderBoard():
    try:
        #while True:
        if os.path.exists("leaderboard.csv"):
            os.remove("leaderboard.csv")
        
        driver = webdriver.Firefox()
        driver.get("http://results.ulmidnightmayhem.com/Leaderboard.aspx")

        select = Select(driver.find_element_by_id("MainContent_DropDownListEvents"))

        # select by visible text
        select.select_by_visible_text('Endurance')
        
        #click on button
        driver.find_element_by_id("MainContent_ButtonLookupEvent").click()


        print(driver.execute_script("return document.documentElement.outerHTML;")) #grab table 

        #driver.quit()
    except KeyboardInterrupt:
        pass 

#leaderBoard()