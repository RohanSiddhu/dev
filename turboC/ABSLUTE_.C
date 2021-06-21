//To find out absolute value.
//Author:Rohan Siddhu
//Date:29/09/2017
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
 float a,b;
 clrscr();

 printf("Enter any decimal vlue:");
 scanf("%f",&a);

 b=abs(a);

 printf("The absolute value is: %f",b);

 getch();
 return 0;
 }