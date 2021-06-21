# This is a Hello World program of tkinter graphics.
#Coded By: Rohan Siddhu
#Date: 18/09/2019

from tkinter import *
from tkinter.ttk import *

def main():
    root=Tk()
    root.title("Hello World!")
    label=Label(root, text="Hello World!")
    button=Button(root, text="Press Me")
    entry=Entry(root, text="Enter Text")
    label.pack()
    entry.pack()
    button.pack()
    root.mainloop()

main()
