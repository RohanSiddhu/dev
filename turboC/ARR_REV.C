//This program is to save the value in an array of other in reverse order.
//Coded by: Rohan Siddhu
//Date:25/04/2018
#include<stdio.h>
#include<conio.h>

void main()
{
 int arr1[5],arr2[5]; //Two arrays declaired.
 int i,j=4;
 clrscr();

 printf("Enter any five numbers:");

 for(i=0; i<=4; i++)
 {
  scanf("%d",&arr1[i]); //Input in arr1 is taken.
 }

 for(i=0; i<=4; i++) //Values of arr1 is coppyed to arr2 in reverse order.
 {
  arr2[j]=arr1[i];
  j--;
 }

 for(i=0; i<=4; i++)
 {
  printf("%d",arr2[i]); //Values of arr2 are printed.
 }

 getch();
}