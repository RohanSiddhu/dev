//To calculate simple interest
//Author:Rohan Siddhu
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
 int p,r,t,si;
 clrscr();

 printf("Enter Principal amount:");
 scanf("%u",&p);
 printf("Enter Rate of interest:");
 scanf("%d",&r);
 printf("Enter the time period:");
 scanf("%d",&t);

 si=(p*r*t)/100;

 printf("Simple interest is: %u\n\n",si);
 printf("Pess any key to exit.");

 getch();
 return 0;
}