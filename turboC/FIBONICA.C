//To print fibonici series.
//Author: Rohan Siddhu
//Date: 28/10/2017
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
int a=1,b=0,c=0,i;
clrscr();

for(i=0;i<24;i++)
{
c=a+b;
a=b;
b=c;
printf("%u \n",c);
}
getch();
return 0;
}