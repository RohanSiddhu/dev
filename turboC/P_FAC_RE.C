//This program is to print the prime factors by using a saperate function.
//Coded by: Rohan Siddhu
//Date: 17/05/2018
#include<stdio.h>
#include<conio.h>

void p_factor(unsigned long);

void main()
{
 unsigned long num;
 clrscr();

 printf("Enter any number:");
 scanf("%lu",&num);

 p_factor(num);

 getch();
}

void p_factor(unsigned long x)
{
 unsigned short rem;
 static short i=2;

 rem=x%i;

 if(rem==0)
 {
  x/=i;
  printf("%3d",i);
 }
 else
  i++;

 if(rem==0 && x!=1)
  printf("   X");

 if(i<=x)
  p_factor(x);
}