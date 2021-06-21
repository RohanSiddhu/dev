
//Coded by: Rohan Siddhu
//Date:27/04/2018
#include<stdio.h>
#include<conio.h>

int main()
{
 auto char ch1,ch2=70;
 auto short int count,blank,blank1=6,i;
 clrscr();

 for(i=0; i<=6; i++) //Master loop: It runs 7 times.
 {
  ch1=65; //ch1 is initialized to 65,i.e.,A.
  printf("\n\n");
  for(count=i; count<7; count++) //This loop is responsible for printing
  {                              //left half side of the output.
   printf("%6c",ch1);
   ch1++;
  }
  if(i!=0)//This loop dosen't run when main loop runs for first time.
  {
   for(blank=0; blank<blank1; blank++)
   {
    printf(" ");
   }
   blank1+=12;
  }
  while(ch2!=64) //This loop is responsible for printing right half of the
  {              //output.
   printf("%6c",ch2);
   ch2--;
  }
  ch2=70;
  ch2=ch2-i;
 }

 getch();
 return 0;
}