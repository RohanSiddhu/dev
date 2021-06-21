//Sum of first and last digit of a 4-digit number.
//Author:Rohan Siddhu
//Date:25/01/2018
#include<stdio.h>
#include<conio.h>

int main()
{
 unsigned int sum,x,a,b;
 clrscr();

 printf("Enter any 4-digit number:");
 scanf("%u",&x);

 a=x%10;
 b=(x-(x%1000))/1000;
 sum=a+b;

 printf("Sum of first and last digit of the number is %u \n\n",sum);
 printf("Press any key to exit.");

 getch();
 return 0;
}