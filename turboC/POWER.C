//To clculate the abslute value of an exponential number.
//Author: Rohan Siddhu
//Date: 27/10/2017
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
int a,b,c,i;
clrscr();

printf("Enter any number:");
scanf("%d",&a);
printf("Enter the exponential power of the number:");
scanf("%d",&b);

c=1;

for(i=0;i<b;i++)
{
c=c*a;
}
printf("The actual value of the number is: %d",c);

getch();
return 0;
}