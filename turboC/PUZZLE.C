/*----------------------------------------------------------------------------
				   Puzzle!
				  ---------
______________________________________________________________________________*/
//Coded by: Rohan Siddhu

/*Files Included*/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

/*Prototype declaration of Functions used*/
int homescreen();
void playscreen();
void lastscreen();
void table();
int getkey();
int ascending(int q[][4]);

/*Global variable declaration*/
int key,i,j;

/*main functon declaration*/
int main()
{
/*Variable declaration*/
 int gd=DETECT,gm; //Variables used in initializing the graph.
 clrscr();
 initgraph(&gd,&gm,"c:\\TC\\BGI"); //Graph initialised.

 setcolor(11);
 settextstyle(10,0,9); //Write puzzle on screen.
 outtextxy(90,100,"Puzzle!");
 delay(4000);
 settextstyle(0,0,0);
 setcolor(15);

 while(1)
 {
  homescreen();
  cleardevice();

  playscreen();
 // lastscreen();
 }
}

int homescreen()
{
 int h=0;
 cleardevice();
 setcolor(15);
 setbkcolor(0);
 settextstyle(0,0,0);
 outtextxy(300,210,"Play");
 outtextxy(300,250,"Exit");
 rectangle(290,203,340,223);

 while(1)
 {
  key=getkey();

  if(key==80 && h==0) //Take the box over Exit.
  {
   cleardevice();
   outtextxy(300,210,"Play");
   outtextxy(300,250,"Exit");
   rectangle(290,243,340,263);
   h++;
  }

  if(key==13 && h==1) //Terminates the execution of the program.
   exit();

  if(key==72 && h==1) //Take the box over Play.
  {
   cleardevice();
   outtextxy(300,210,"Play");
   outtextxy(300,250,"Exit");
   rectangle(290,203,340,223);
   h--;
  }

  if(key==13 && h==0) //Return control to the main.
   return 0;
 }
}

void playscreen()
{
 short arr[4][4]={
		  {1,4,15,7},
		  {8,10,2,11},
		  {14,3,6,13},
		  {12,9,5,16}
		 };            //Array declairation.
 short x,y,move=0,change;
 int a=3,b=3;

 table(); //Draw table.

 while(1)
 {
 //Print the elements in the table.
  for(i=0,y=8; i<4; i++,y+=5)
  {
   for(j=0,x=24; j<4; j++,x+=9)
   {
    gotoxy(x,y);

    if(arr[i][j]==16) //Print blank space at the place of 16.
     printf("  ");
    else
     printf("%2d",arr[i][j]);
   }
  }
  outtextxy(400,20,"Moves:");
  gotoxy(58,2);
  printf("%d",move);

  //Terminates the loop while Puzzle is complete.
  if(ascending(arr)==0)
   break;

  key=getkey(); //scan code of key pressd is assigned to the variable key.

  if(key==27) //Contro is passed to homescreen while ESC is pressed.
  {
   homescreen();
   cleardevice();
   table();
  }
  else if(key==72 && a!=3) //Up arrow key.
  {
   sound(1000);
   delay(20);
   nosound();

   change=arr[a][b];
   arr[a][b]=arr[a+1][b];
   arr[a+1][b]=change;
   a++;
   move++;
  }
  else if(key==80 && a!=0) //Down arrow key.
  {
   sound(1000);
   delay(20);
   nosound();

   change=arr[a][b];
   arr[a][b]=arr[a-1][b];
   arr[a-1][b]=change;
   a--;
   move++;
  }
  else if(key==75 && b!=3) //Left arrow key.
  {
   sound(1000);
   delay(20);
   nosound();

   change=arr[a][b];
   arr[a][b]=arr[a][b+1];
   arr[a][b+1]=change;
   b++;
   move++;
  }
  else if(key==77 && b!=0) //Right arrow key.
  {
   sound(1000);
   delay(20);
   nosound();

   change=arr[a][b];
   arr[a][b]=arr[a][b-1];
   arr[a][b-1]=change;
   b--;
   move++;
  }
  else
  {
   sound(500);
   delay(200);
   nosound();
  }
 }
 lastscreen();
}

void lastscreen()
{
 cleardevice();
 settextstyle(4,0,6);
 setbkcolor(0);
 setcolor(4);
 outtextxy(150,190,"Congretulations");

 for(i=200; i<1000; i+=20)
 {
  sound(i);
  delay(40);
  nosound();
  delay(10);

  sound(i-30);
  delay(50);
  nosound();
  delay(15);
 }
}

/*This function drow a table of 4X4 on the screen.*/
void table()
{
 setcolor(4);
 setbkcolor(9);
/*Vertical Lines*/

 line(150,80,150,400); //v_line 1.
 line(225,80,225,400); //v_line 2.
 line(300,80,300,400); //v_line 3.
 line(375,80,375,400); //v_line 4.
 line(450,80,450,400); //v_line 5.

/*Horizontal Lines*/

 line(150,80,450,80); //h_line 1.
 line(150,160,450,160); //h_line 2.
 line(150,240,450,240); //h_line 3.
 line(150,320,450,320); //h_line 4.
 line(150,400,450,400); //h_line 5.
}

/*This function return the scan code of key pressed.*/
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

/*This function return 1 when array is not in ascending order and return 0
   when array is in ascending order.*/
int ascending(int q[][4])
{
 int a;
 for(a=1,i=0; i<4; i++)
  for(j=0; j<4; j++,a++)
   if(q[i][j]!=a)
    return 1;

 return 0;
}