/*This program use insertion sort to sort array elements.*/
//Coded by: Rohan Siddhu
//Date: 12/06/2018
#include<stdio.h>
#include<conio.h>

int main()
{
 int arr[25];
 int *p,*j,i,t,a;
 clrscr();

 for(i=25,t=1,p=arr; i; i--,t++,p++)
 {
  printf("Enter element %2d: ",t);
  scanf("%d",p);
 }

 for(i=24,p=arr+1; i; i--,p++)
 {
  j=arr;

  for(a=25; a>i; a--,j++)
  {
   if(*p<*j)
   {
    t=*p;
    *p=*j;
    *j=t;
   }
  }
 }

 for(i=25,p=arr; i; i--,p++)
 {
  printf("%6d",*p);
 }

 getch();
 return 0;
}