/*A calculater to perform addition, subtraction, multiplisation and division*/
/*Author:Rohan Siddhu*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
 float a,b,d;
 int c;
 clrscr();

 printf("Enter the first number:");
 scanf("%f",&a);
 printf("Chose 1 for +, 2 for -, 3 for *, 4 for /:");
 scanf("%d",&c);
 printf("Enter second number:");
 scanf("%f",&b);

 if(c==1)
 {
  d=a+b;
 }
 else if(c==2)
 {
  d=a-b;
 }
 else if(c==3)
 {
  d=a*b;
 }
 else if(c==4)
 {
  d=a/b;
 }
 else
 {
  printf("Chose the correct option.");
 }
 printf("%f",d);

 getch();
 return 0;
}