//Program 3 from "Pointers In C".
//Author: Rohan Siddhu
//Date: 28/10/2017
#include<stdio.h>
#include<conio.h>

int main()
{
int i=3;
int *j;
clrscr();

j=&i;

printf("Address of i = %u\n",&i);
printf("Address of i = %u\n",j);
printf("Address of j = %u\n",&j);
printf("Value of j = %u\n",j);
printf("Value of i = %d\n",i);
printf("Value of i = %d\n",*(&i));
printf("Value of i = %d\n\n\n\n\n\n",*j);
printf("Press any key to exit.");

getch();
return 0;
}