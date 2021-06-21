//This program is to calculate factorial using a saperate function.
//Coded by:Rohan Siddhu
//Date:15/03/2018
#include<stdio.h>
#include<conio.h>

void main()
{
 unsigned long int factorial(int);
 int num;
 unsigned long int fact;
 clrscr();

 printf("Enter any number:");
 scanf("%d",&num);

 fact=factorial(num);

 printf("%lu",fact);

 getch();
}

unsigned long int factorial(int x)
{
 int i;
 unsigned long int mul,a=1;

 if(x==0 || x==1)
 {
  return(1);
 }
 else
 {
  for(i=1; i<=x; i++)
  {
   mul=i*a;
   a=mul;
  }
  return(mul);
 }
}