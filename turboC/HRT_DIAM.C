/*This program is to fill the output screen with heart and diamond
  alternatively*/
//Coded by:Rohan Siddhu
//Date:06/03/2018
#include<stdio.h>
#include<conio.h>

void main()
{
 char heart=3,diamond=4;
 clrscr();

 for(short int i=0; i<500; i++)
 {
  printf(" %c %c",heart,diamond);
 }

 getch();
}