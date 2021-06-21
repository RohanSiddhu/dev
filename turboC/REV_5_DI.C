//Reverse the order of any 5-digit number.
//Author:Rohan Siddhu
//Date:25/01/2018
#include<stdio.h>
#include<conio.h>

int main()
{
 unsigned int x,a,b,c,d,e;
 clrscr();

 printf("Enter any 5-digit number:");
 scanf("%u",&x);

 a=x%10;
 b=((x-a)/10)%10;
 c=((x-(x%100))/100)%10;
 d=((x-(x%1000))/1000)%10;
 e=(x-(x%10000))/10000;

 printf("Reversed order of the digit is %u%u%u%u%u \n\n",a,b,c,d,e);
 printf("Press any key to exit.");

 getch();
 return 0;
}