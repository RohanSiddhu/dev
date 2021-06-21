/*A Program For Printing Storage Space Taken By A Float
  And Its Ranging Values*/
/*Author:Rohan Siddhu*/
#include<stdio.h>
#include<conio.h>
#include<float.h>

int main()
{
 clrscr();

 printf("Size for float: %d \n", sizeof(float));
 printf("Maximum float positive value: %E \n", FLT_MAX );
 printf("Minimum float positive value: %E \n", FLT_MIN );
 printf("Precision value: %d", FLT_DIG );

 getch();
 return 0;
}