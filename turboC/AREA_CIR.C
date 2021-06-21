//To Calculate area and circumference of a circle when radius is the input.
//Author: Rohan Siddhu
//Date: 29/10/2017
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
int r;
float a,c;
clrscr();

printf("Enter the radius of the circle:\n");
scanf("%d",&r);

a=3.14*r*r;
c=2*3.14*r;

printf("Area of the circle = %f\n",a);
printf("Circumference of circle = %f\n\n\n",c);
printf("Enter any key to exit. \n");

getch();
return 0;
}