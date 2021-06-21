//This program is to write the mathematical table of any entered number.
//Coded by:Rohan Siddhu
//Date:06/03/2018
#include<stdio.h>
#include<conio.h>

void main()
{
 unsigned int num,product;
 clrscr();

 printf("Enter any number you want:");
 scanf("%u",&num);

 for(short int i=1; i<=10; i++)
 {
   product=num*i;

   printf("\n %u X %d =%u",num,i,product);
 }

 getch();
}