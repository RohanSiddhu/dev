//This program is to print the prime factors of any entered number.
//Author:Rohan Siddhu.
//Date:11/03/2018
#include<stdio.h>
#include<conio.h>

void factor(unsigned long int);

void main()
{
 unsigned long int num;
 clrscr();

 printf("Enter any number:");
 scanf("%lu",&num);

 factor(num);

 getch();
}

void factor(unsigned long int num)
{
 unsigned long int a=2;

 while(a<=num)
 {
  if(num%a==0)
  {
   num=num/a;

   printf("%lu   ",a);
   continue;
  }
  a++;
 }
}