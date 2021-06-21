#This program draws a triangle by clicking on the screen.
#Coded by: Rohan Siddhu
#Date: 05/08/2018

from graphics import *

def main():
    win=GraphWin('Triangle', 600, 600)
    win.setBackground('white')

    message=Text(Point(300,30), 'Click on the three points')
    message.draw(win)

    p=win.getMouse()
    p.draw(win)

    p1=win.getMouse()
    p1.draw(win)

    p2=win.getMouse()
    p2.draw(win)

    triangle=Polygon(p, p1, p2)
    triangle.setFill('peachpuff')
    triangle.setOutline('cyan')
    triangle.draw(win)

    message.setText('Click any where to quit')
    win.getMouse()
    win.close()

main()
