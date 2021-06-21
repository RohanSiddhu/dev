//Read the digits of any two digit number.
//Author:Rohan Siddhu
//Date:24/01/2018
#include<stdio.h>
#include<conio.h>

int main()
{
 int a,b,c,d;
 clrscr();

 printf("Enter any two digit number:");
 scanf("%d",&a);

 b=a%10;
 c=(a-b)/10;

 printf("You have entered %d and %d. \n",c,b);
 printf("Press any key to exit.");

 getch();
 return 0;
}