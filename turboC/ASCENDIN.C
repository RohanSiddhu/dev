#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,t;
clrscr();
printf("Enter first no.\n");
scanf("%d",&a);
printf("Enter second no.\n");
scanf("%d",&b);
if(a<b)
{
t=a;
a=b;
b=t;
}
printf("%d\t%d",a,b);
getch();
}