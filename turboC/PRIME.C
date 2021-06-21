//This program checks weather the entered number is prime or not.
//Coded by:Rohan Siddhu
//Date:19/02/2018
#include<stdio.h>
#include<conio.h>

void main()
{
 unsigned long int num,rem,i;
 clrscr();

 printf("Enter any number:");
 scanf("%lu",&num); //Takes input

 if(num==1) //When input value is 1.
 {
  printf("\nNeithe Prime nor Composit.",num);
 }
 else //When the input value is other than 1.
 {
  for(i=2; i<=num; i++)
  {
   rem=num%i;

   if(i==num/2 || num==2) // Either if the loop counter is equal to the half
   {                     //  of number or number=2
    printf("\nPrime.",num);
    break;
   }
   else if(rem==0) /* When rem has value=0 */
   {
    printf("\nNot Prime.");
    break;
   }
  }
 }

 getch();
}