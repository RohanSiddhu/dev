/*Greater than, Smaller than or Equal to*/
/*Author:Rohan Siddhu*/
#include<stdio.h>
#include<conio.h>

int main()
{
 int a,b;
 clrscr();

 printf("Enter first number:");
 scanf("%d",&a);
 printf("Enter second number:");
 scanf("%d",&b);

 if(a>b)
 {
  printf("The greater number is: %d",a);
 }
 else if(b>a)
 {
  printf("The greater number is: %d",b);
 }
 else
 {
  printf("Both numbers are equal");
 }

 getch();
 return 0;
}