//To find the factorials of any number.
//Author:Rohan Siddhu
//Date:27/11/2017
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
 int a=1,b=1,c,d,i;
 clrscr();

 printf("Enter any number:");
 scanf("%d",&d);

 if(d==0)
 {
  printf("The factorial of %d is: 1 \n\n\n",d);
 }
 else if(d==1)
 {
  printf("The factorial of %d is: 1 \n\n\n",d);
 }
 else
 {
  for(i=0; i<d; i++)
  {
   c=a*b;
   a=a+1;
   b=c;
  }
  printf("The factorial of %d is: %u \n\n\n",d,c);
 }

 printf("Enter any key to exit.");

 getch();
 return 0;
}