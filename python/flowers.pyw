from mypolygon import *

center=0;

def flower(angle):
    bob=turtle.Turtle();
    for i in range(8):
        bob.lt(90+(180-angle)/2);
        arc(bob, 100, angle);
    turtle.mainloop();

flower(120);
