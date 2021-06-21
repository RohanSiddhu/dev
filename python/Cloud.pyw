#This program make a cloud on the graphical window.
#Coded by: Rohan Siddhu
#Date: 06/08/2018

from graphics import *

def main():
    win=GraphWin('Clouds', 1260, 660)
    win.setBackground('white')

    color=color_rgb(200, 200, 200)
    c1=Circle(Point(50, 40), 30)
    c1.setFill(color)
    c1.setOutline(color)
    c1.draw(win)

    c2=Circle(Point(60, 30), 25)
    c2.setFill(color)
    c2.setOutline(color)
    c2.draw(win)

    c3=Circle(Point(80, 30), 30)
    c3.setFill(color)
    c3.setOutline(color)
    c3.draw(win)

    win.geyMouse()
    win.close()

main()
