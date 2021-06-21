//This program fills the full screen with smiling face.
//Coded by:Rohan Siddhu
//Date:24/02/2018
#include<stdio.h>
#include<conio.h>

void main()
{
 char smiley=1;
 short int i;
 clrscr();

 for(i=1;i<=1000;i++)
 {
  printf("%c ",smiley);
 }

 getch();
}