//To check weather the number is even or odd.
//Author:Rohan Siddhu
//Date:21/11/2017
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
 int a;
 clrscr();

 printf("Enter any number:");
 scanf("%d",&a);

 if(a%2==0)
 {
 printf("Even \n");
 }
 else
 {
 printf("Odd \n");
 }

 printf("Enter any key to exit.");

 getch();
 return 0;
}