/*This program prints the ASCII value from o to 255 and their corresponding
  character.*/
//Coded by:Rohan Siddhu
//Date:19/02/2018
#include<stdio.h>
#include<conio.h>

void main()
{
 unsigned char ch=0;
 clrscr();

 while(ch<255)
 {
  printf("\n%d %c",ch,ch);

  ch++;
 }

 getch();
}
