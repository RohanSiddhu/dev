#include<stdio.h>
#include<conio.h>

int main()
{
int a,b,c;
clrscr();

printf("Enter cost price:");
scanf("%d",&a);
printf("Enter selling price:");
scanf("%d",&b);
if(a>b)
{
c=a-b;
printf("You have loss of: %d",c);
}
else if(b>a)
{
c=b-a;
printf("You have a profit of: %d",c);
}
else
{
printf("You have neither loss nor profit.");
}

getch();
return 0;
}