//To print all armstrong numbers between 0 to 500.
//Author:Rohan Siddhu
//Date:03/02/2018
#include<stdio.h>
#include<conio.h>

int main()
{
 int a,b,c,i,sum;
 clrscr();

 printf("Armstrong number between 0 to 500.\n");
 for(a=0;a<=5;a++)
 {
  for(b=0;b<=9;b++)
  {
   for(c=0;c<=9;c++)
   {
    i=a*100+b*10+c;
    sum=a*a*a+b*b*b+c*c*c;
    if(i==sum && i!=0)
    {
     printf("%d \n",i);
    }
   }
  }
 }

 getch();
 return 0;
}