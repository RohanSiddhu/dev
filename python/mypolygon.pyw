#This program use turtle module to draw polygon.
#Coded By: Rohan Siddhu
#Date: 03/08/2019

import turtle
import math

center=0;

def polygon(t, n, length):
    t.pu()
    t.rt(135)
    t.fd(round((length//2)*math.sqrt(n//2),0))
    t.rt(225)
    t.pd()
    
    for i in range(n):
        t.fd(length)
        t.lt(360/n)

def circle(t, r):
    if(center):
        t.pu()
        t.rt(90)
        t.fd(r)
        t.lt(90)
        t.pd()

    length=2*math.pi

    if r<50:
        n=50
        length=(2*math.pi*r)/n
    else:
        n=r
    
    for i in range(n):
        t.fd(length)
        t.lt(360/n)

def arc(t, r, angle):
    if(center):
        t.pu()
        t.rt(90)
        t.fd(r)
        t.lt(90)
        t.pd()

    length=(2*math.pi*r)/360;
    
    for i in range(angle):
        t.fd(length)
        t.lt(1)
