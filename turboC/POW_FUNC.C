/*To find first number raised to the power of other when two numbers are
  entered through keyboard. Usint pow(); function.*/
//Author:Rohan Siddhu
//Date:03/02/2018
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
 unsigned int a,b,power;
 clrscr();

 printf("Enter first number:");
 scanf("%u",&a);

 printf("Enter second number:");
 scanf("%u",&b);

 power=pow(a,b);

 printf("%u raised to the power %u is: %u",a,b,power);

 getch();
 return 0;
}