//If statement programe.
//Author:Rohan Siddhu
//Date:26/01/2018
#include<stdio.h>
#include<conio.h>

int main()
{
 int num;
 clrscr();

 printf("Enter any number less than 10:");
 scanf("%d",&num);

 if(num<=10)
 {
  printf("\n\nWhat an obedient servant you are!");
 }

 getch();
 return 0;
}