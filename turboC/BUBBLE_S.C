//This program use bubble sort algorithem.
//Coded by: Rohan Siddhu
//Date:19/05/2015
#include<stdio.h>
#include<conio.h>

int main()
{
 int arr[25];
 int i,a,t,*p,*j;
 clrscr();

 printf("Enter 25 numbers:\n");

 for(i=25,p=arr; i; i--,p++)
  scanf("%d",p);

 for(i=24; i; i--)
  for(a=0,p=arr,j=arr+1; a<i; a++)
  {
   if(*p>*j)
   {
    t=*p;
    *p=*j;
    *j=t;
   }
   p++;
   j++;
  }

 for(i=25,p=arr; i; i--,p++)
  printf("%6d",*p);

 getch();
 return 0;
}