from math import trunc
import os
from urllib.parse import quote
import pyttsx3
import speech_recognition as sr
import webbrowser as web
import wikipedia
import time
import datetime
import cv2
import sys
engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
engine.setProperty('voices', voices[0].id)
engine.setProperty('rate', 170)
        
def speak(audio):
    engine.say(audio)
    print(audio)
    engine.runAndWait()

# wishing:
def wishMe():
    tt = time.strftime("%H:%M")
    hour = int(datetime.datetime.now().hour)
    if hour>= 0 and hour<12:
        speak(f"Good Morning sir!, it's {tt}")
  
    elif hour>= 12 and hour<18:
        speak(f"Good Afternoon sir!, it's {tt}")  
  
    else:
        speak(f"Good Evening sir!, it's {tt}")
    speak('How may I help you?')

def takecommand():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print('listening...')
        r.pause_threshold = 1
        audio = r.listen(source)
    try:
        print("Recognizing...")
        query = r.recognize_google(audio, language = 'en_in')
        print(f"user said:{query}")
    except Exception as e:
        # speak("can you please repeat that...")
        return "none"
    return query

if __name__ == "__main__":
    wishMe()
    while True:
        query = takecommand().lower()

    # wikipedia search:
        if 'wikipedia' in query:
            speak('Searching Wikipedia...')
            query = query.replace("Wikipedia", "")
            result = wikipedia.summary(query, sentences=2)
            speak("According to Wikipedia",)
            print(result)
            speak(result)

        # open website:
        elif'open youtube' in query:
            path = r"C:\Users\Administrator\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Chrome Apps\YouTube.lnk"
            speak('enjoy your video sir')
            os.startfile(path)
        elif'open google' in query:
            path="C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Google Chrome.lnk"
            speak('opening google')
            os.startfile(path)
        elif'online classes' in query:
            path =r"https://teams.microsoft.com/_#/calendarv2"
            speak('good luck for your online classes sir!')
            os.startfile(path)
            
        # talk to jarvis:
        elif'who are you' in query:
            speak("Let me introduce myself I am Jarvis The virtual artificial intelligence And I am here to assist you with variety of tasks as best I can twenty four hours a day seven days a week.")
        elif'who am i' in query:
            speak('if you talk, definately you are human')
        elif'how are you' in query:
            speak('I am fine, How do you do?')
        elif'also fine'in query:
            speak('good to hear that sir')
        elif'time' in query:
            strTime = datetime.datetime.now().strftime("%H:%M:%S")    
            speak(f"Sir, the time is {strTime}")
        elif'dream places' in query:
            path = 'E:\DREAM PLACES.docx'
            speak('Here are your dream places sir')
            os.startfile(path)
        elif'my goal' in query:
            path = "E:\IIT-JEE\MY GOAL.docx"
            speak('Here are yor goal sir')
            os.startfile(path)
        elif'my aim' in query:
            speak('Your aim is to get into INDIAN INSTITUTE OF TECHNILOGY which is the best institute for engineering')

        #timetable:
        elif('time table') in query:
            path = "E:\IIT-JEE\Timetable.docx"
            speak('opening your timetable')
            os.startfile(path)

        # opening drives:
        elif'open drive c' in query:
            path="C:\\"
            speak('opening drive c')
            os.startfile(path)
        elif'open drive d' in query:
            path="D:\\"
            speak('opening drive d')
            os.startfile(path)
        elif'open drive e' in query:
            path="E:\\"
            speak('opening drive e')
            os.startfile(path)
        elif'open drive f' in query:
            path="F:\\"
            speak('opening drive f')
            os.startfile(path)

        # open microsoft office:
        elif'open powerpoint' in query:
            path="C:\ProgramData\Microsoft\Windows\Start Menu\Programs\SoftMaker FreeOffice 2021\Presentations.lnk"
            speak('opening powerpoint')
            os.startfile(path)
        elif'open words' in query:
            path="C:\ProgramData\Microsoft\Windows\Start Menu\Programs\SoftMaker FreeOffice 2021\TextMaker.lnk"
            speak('opening word')
            os.startfile(path)
        elif'open excel' in query:
            path="C:\ProgramData\Microsoft\Windows\Start Menu\Programs\SoftMaker FreeOffice 2021\PlanMaker.lnk"
            speak('opening excel')
            os.startfile(path)

        # open programs:
        elif'microsoft edge' in query:
            path = r"C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Microsoft Edge.lnk"
            speak("opening microsoft edge")
            os.startfile(path)
        elif'google drive' in query:
            path = r"C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Google Drive.lnk"
            speak('opening google drive')
            os.startfile(path)
        elif'google photos' in query:
            path =r"C:\Users\Administrator\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\Chrome Apps\Google Photos.lnk"
            speak('opening google photos')
            os.startfile(path)
        elif 'open control panel' in query:
            path=r"C:\Users\Administrator\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\System Tools\Control Panel.lnk"
            speak('opening control panel')
            os.startfile(path)
        elif'open command prompt' in query:
            path=r"C:\Users\Administrator\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\System Tools\Command Prompt.lnk"
            speak('opening command prompt')
            os.startfile(path)
        elif'open run' in query:
            path=r"C:\Users\Administrator\AppData\Roaming\Microsoft\Windows\Start Menu\Programs\System Tools\Run.lnk"
            speak('opening run')
            os.startfile(path)
        elif'open vs code' in query:
            path=r"C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Visual Studio Code\Visual Studio Code.lnk"
            speak('opening vs code')
            os.startfile(path)
        elif'open notepad' in query:
            path=r"C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Accessories\Notepad.lnk"
            speak('opening notepad')
            os.startfile(path)
        elif'open paint' in query:
            path="C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Accessories\Paint.lnk"
            speak('opening paint')
            os.startfile(path)
        elif'open wordpad' in query:
            path="C:\ProgramData\Microsoft\Windows\Start Menu\Programs\Accessories\Wordpad.lnk"
            speak('opening wordpad')
            os.startfile(path)
        elif'open task manager' in query:
            path="C:\ProgramData\Microsoft\Windows\Start Menu\Programs\System Tools\Task Manager.lnk"
            speak('opening task manager')
            os.startfile(path)
        elif('teamviewer') in query:
            path = "C:\ProgramData\Microsoft\Windows\Start Menu\Programs\TeamViewer.lnk"
            speak('opening teamviewer')
            os.startfile(path)
        elif'open camera' in query:
            cap = cv2.VideoCapture(0)
            speak('opening camera')
            while True:
                ret, img = cap.read()
                cv2.imshow('webcam', img)
                k = cv2.waitKey(10)
                if k==27:
                    break
            cap.release()
            cv2.destroyallwindows()

        elif'exit' in query:
            speak('have a nice day sir!')
            sys.exit()