//Power(b,a); function in which b is raised to the power a.
//Coded by:Rohan Siddhu
//Date:15/03/2018
#include<stdio.h>
#include<conio.h>

void main()
{
 unsigned long int power(unsigned int, unsigned int);
 unsigned long int expo;
 unsigned int a,b;
 clrscr();

 printf("Enter any number:");
 scanf("%u",&a);

 printf("Enter its power to be calculated:");
 scanf("%u",&b);

 expo=power(b,a);

 printf("%u raised to the power %u is:%lu",b,a,expo);

 getch();
}

unsigned long int power(unsigned int b, unsigned int a)
{
 unsigned int i;
 unsigned long int x=a,pro;

 for(i=1; i<b; i++)
 {
  pro=a*x;
  x=pro;
 }
 return(pro);
}