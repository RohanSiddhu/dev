/*This program use sieve of Eratosthenes procedur to print the prime numbers
   from 1 to 100.*/
//Coded by: Rohan Siddhu
//Date: 13/06/2018
#include<stdio.h>
#include<conio.h>

int main()
{
 short arr[100];
 short a,i,t;
 clrscr();

 for(i=0; i<100; i++)
  arr[i]=i+1;

 for(t=1; t<=100; t++)
  if(arr[t]!=0)
   for(i=t+1; i<=100; i++)
   {
    a=arr[i]%arr[t];

    if(a==0)
     arr[i]=0;
   }

 for(i=0; i<100; i++)
  if(arr[i]!=0)
   printf("%6d",arr[i]);

 getch();
 return 0;
}