#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

int getkey();

int main()
{
 int gd=DETECT,gm;
 int x=0,key;
 clrscr();
 initgraph(&gd,&gm,"C:\\TC\\BGI");

 while(1)
 {
  if(x>700)
   x=0;
  if(x<0)
   x=700;
  line(00,219,700,219); //Surface.
  line(45+x,170,90+x,170); //Roof line.
  line(45+x,170,30+x,190); //Rear Sheild.
  line(90+x,170,115+x,190); //Wind Sheild.
  line(15+x,190,150+x,190); //Middle line.
  line(15+x,190,10+x,205); //Rear bumper.
  line(10+x,205,13+x,210);
  line(150+x,190,160+x,205); //Frount bumper.
  line(160+x,205,160+x,210);
  line(13+x,210,28+x,210); //Bottum line1.
  line(52+x,210,108+x,210); //Bottum line2.
  line(132+x,210,160+x,210); //Bottum line3.
  line(28+x,210,32+x,201); //Rear wheel cuting.
  line(32+x,201,48+x,201);
  line(48+x,201,52+x,210);
  line(108+x,210,112+x,201); //Frount wheel cutting.
  line(112+x,201,128+x,201);
  line(128+x,201,132+x,210);
  circle(40+x,210,9); //Rear wheel.
  circle(40+x,210,2);
  circle(120+x,210,9); //Frount wheel.
  circle(120+x,210,2);

  key=getkey();
  if(key==77)
   x+=3;
  if(key==75)
   x-=3;
  if(key==27)
   exit();

  delay(20);
  cleardevice();
 }
}

int getkey()
{
 int ch;
 ch=getch();
 if(ch==0)
 {
  ch=getch();
  return ch;
 }
 return ch;
}