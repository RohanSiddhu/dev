//This program prints all the possible cimbinations of any 4-digit number.
//Coded by:Rohan Siddhu
//Date:24/02/2018
#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b,c,d,num,x,y,z,p,q,r;
 clrscr();

 printf("Enter any 4-digit number:");
 scanf("%d",&num);

 a=num/1000;
 b=(num/100)%10;
 c=(num/10)%10;
 d=num%10;

 printf("All possible combination of digits %d, %d, %d, %d.\n",a,b,c,d);

 for(p=1; p<=4; p++)
 {
  for(q=1; q<=3; q++)
  {
   for(r=1; r<=2; r++)
   {
    printf("%d%d%d%d            ",a,b,c,d);

    x=c;
    c=d;
    d=x;
   }

   y=b;
   b=c;
   c=d;
   d=y;
  }

  z=a;
  a=b;
  b=c;
  c=d;
  d=z;
 }

 getch();
}