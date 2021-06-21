/*                            -------------------
			       Match Stick Game.
			      -------------------
						-Coded by: Rohan Siddhu.
____________________________________________________________________________*/
#include<stdio.h>
#include<conio.h>

/*Macro definitions*/
#define HLINE(length) for(a=length; a; a--)\
		       printf("%c",205);
#define VLINE(col,row,height) for(a=row; a<row+height; a++)\
			      {\
			       gotoxy(col,a);\
			       printf("%c",186);\
			      }

/*Function's prototype declairation*/
void screen1();//Prototype of screen1.

int main()
{
 clrscr();

 screen1();//screen1 function call.

 getch();
 return 0;
}
/*____________________________________________________________________________
-----------
  screen1
-----------

 This function (screen1) presents the very first screen appearence. It writes
 `Match Stick Game!' inside a box which covers the whole screen.
____________________________________________________________________________*/

void screen1()
{
 int a;//Variable 'a' is reqired for HLINE and VLINE.

 gotoxy(2,2); //Top left corner.
 printf("%c",201);

 gotoxy(78,2); //Top right corner.
 printf("%c",187);

 gotoxy(2,24); //Bottom left corner.
 printf("%c",200);

 gotoxy(78,24); //Bottom right corner.
 printf("%c",188);

 gotoxy(3,2); //Top line.
 HLINE(75);

 gotoxy(3,24); //Bottom line.
 HLINE(75);

 VLINE(2,3,21); //Left line.

 VLINE(78,3,21); //Right line.
}