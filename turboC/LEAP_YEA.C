//This program is to check leap year.
//Coded by:Rohan Siddhu
//Date:22/03/2018
#include<stdio.h>
#include<conio.h>
#include<math.h>

void leapyear(unsigned int);

void main()
{
 unsigned int year;
 clrscr();

 printf("Enter the year:");
 scanf("%u",&year);

 leapyear(year);

 getch();
}

void leapyear(unsigned int year)
{
 int a,b;

 a=year%100;

 if(a==0)
 {
  b=year%400;

  if(b==0)
  {
   printf("Leap year.");
  }
  else
  {
   printf("Not a leap year.");
  }
 }
 else
 {
  b=year%4;

  if(b==0)
  {
   printf("Leap year.");
  }
  else
  {
  printf("Not a leap year.");
  }
 }
}