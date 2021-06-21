/*This program use selection sort method to sort to sort the items of an
   array in assending order.*/
//Coded by: Rohan Siddhu
//Date:11/06/2018
#include<stdio.h>
#include<conio.h>

int main()
{
 int arr[25];
 short *p,*j,i,t,a;
 clrscr();

 printf("Enter 25 numbers:");

 for(i=25,p=arr; i; i--,p++)
  scanf("%d",p);

 for(i=24,p=arr; i; i--)
 {
  for(a=0,j=p+1; a<i; a++)
  {
   if(*p>*j)
   {
    t=*p;
    *p=*j;
    *j=t;
   }
   j++;
  }
  p++;
 }

 for(i=25,p=arr; i; i--,p++)
  printf("%6d",*p);

 getch();
 return 0;
}