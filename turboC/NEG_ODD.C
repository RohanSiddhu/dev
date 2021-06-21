/*This program finds the number of positive, negative, even and odd enterde
   in an array of 25 elements.*/
//Coded by: Rohan Siddhu
//Date: 13/06/2018
#include<stdio.h>
#include<conio.h>

int main()
{
 int arr[25];
 short negative=0,positive=0,even=0,odd=0,rem,i;
 clrscr();

 for(i=1; i<=25; i++)
 {
  printf("Enter element %d: ",i);
  scanf("%d",&arr[i]);
 }

 for(i=0; i<25; i++)
 {
  rem=arr[i]%2;

  if(arr[i]<0)
   negative++;

  if(arr[i]>0)
   positive++;

  if(rem==0)
   even++;
  else
   odd++;
 }

 printf("\nYou Entered %c\nPositive: %d\tNegative: %d\nEven: %d\tOdd: %d",26,positive,negative,even,odd);

 getch();
 return 0;
}