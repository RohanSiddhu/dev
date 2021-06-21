//To print storage size of int and its ranging value
//Author:Rohan Siddhu
#include<stdio.h>
#include<conio.h>
#include<limits.h>

int main()
{
 clrscr();

 printf("Storage size for int: %d\n", sizeof(int));
 printf("Maximum int value: %d\n",INT_MAX);
 printf("Minimum int value: %d\n",INT_MIN);

 getch();
 return 0;
}