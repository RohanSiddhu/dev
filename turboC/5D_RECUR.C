//This program gives the sum of the digits of any 5-digit number.
//Coded by: Rohan Siddhu
//Date: 08/05/2018
#include<stdio.h>
#include<conio.h>

int rec(long int);

int main()
{
 long int num;
 int sum;
 clrscr();

 printf("Enter any 5-digit number:");
 scanf("%ld",&num);

 sum=rec(num);

 printf("Sum of the digits of the number is: %d",sum);

 getch();
 return 0;
}

int rec(long int num)
{
 int add;

 if(num<10)
 {
  return (num);
 }
 else
 {
  add=(num%10)+rec(num/10);
 }

 return (add);
}