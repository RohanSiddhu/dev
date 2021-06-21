#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
int a,b,c,i;
clrscr();
printf("Enter the number:");
scanf("%d",&a);
printf("Enter the exponential power:");
scanf("%d",&b);
i=0;
do
{
c=a*a;
i++;
}
while(i<=b);
printf("Solution: %d",c);
getch();
return 0;
}


