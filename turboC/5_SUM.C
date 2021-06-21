//This program gives the sum of the digits of any five digit number input.
//Coded by:Rohan Siddhu
//Date:19/01/2018
#include<stdio.h>
#include<conio.h>

int main()
{
 unsigned int sum,x,a,b,c,d,e;
 clrscr();

 printf("Enter any five digit number:");
 scanf("%u",&x);

 a=x%10;
 b=((x-a)/10)%10;
 c=((x-(x%100))/100)%10;
 d=((x-(x%1000))/1000)%10;
 e=((x-(x%10000))/10000)%10;
 sum=a+b+c+d+e;

 printf("Sum of its digits is:%u\n\n",sum);
 printf("Press any key to exit.");

 getch();
 return 0;
}