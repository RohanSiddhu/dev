//This program use recursion to print fibonacci seriese upto 25.
//Coded by: Rohan Siddhu
//Date:19/05/2018
#include<stdio.h>
#include<conio.h>

#define LIMIT 25

void fibonacci(unsigned short);

int main()
{
 clrscr();

 fibonacci(LIMIT);

 getch();
 return 0;
}

void fibonacci(unsigned short x)
{
 static unsigned short num,a=0,b=1,t;

 num=a+b;
 t=a;
 a=num;
 b=t;

 printf("%8u",num);

 if(x>0)
 fibonacci(--x);
}