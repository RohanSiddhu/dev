/*To print the address of any integer.*/
/*Author:Rohan Siddhu*/
#include<stdio.h>
#include<conio.h>

int main()
{
 int i=3;
 clrscr();

 printf("Address of i=%u\n",&i);
 printf("Value of i=%d\n",i);
 /* Printing the value of *(&i)is same as printing the value of i*/
 printf("Valie of i=%d\n",*(&i));

 getch();
 return 0;
}