//To find out greater between area and perimeter of a rectangle.
//Author:Rohan Siddhu
//Date:28/09/2017
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
 float a,b,area,P;
 clrscr();

 printf("Enter length and breadth of the rectangle:");
 scanf("%f%f",&a,&b);

 area=a*b;

 P=(a+b)*2;

 if(area>P)
 {
  printf("Area is greater.");
 }
 else if(P>area)
 {
  printf("Perimeter is greater.");
 }
 else
 {
  printf("Both area and perimeter are equal.");
 }
 getch();
 return 0;
 }