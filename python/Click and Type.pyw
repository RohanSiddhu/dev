#This program prints the key pressed where the user  click on the screen.
#Coded by: Rohan Siddhu
#Date: 05/08/2018

from graphics import *

def main():
    win=GraphWin('Click and Type', 600, 600)

    for i in range(10):
        pt=win.getMouse()
        key=win.getKey()

        label=Text(pt,key)
        label.draw(win)

main()
