//Coded by: Rohan Siddhu
//Date: 29/04/2018
#include<stdio.h>
#include<conio.h>

int main()
{
 auto short int i,blank,blank1=3,count,count1=1;//Variables used for loop count.
 auto short int num=1;
 clrscr();

 for(i=0; i<4; i++)//Main loop.
 {
  printf("\n\n");

  for(blank=0; blank<blank1; blank++)//This loop is responsible for inserting
  {                                  //at the begning.
   printf("\t");
  }
  blank1-=1;

  for(count=0; count<count1; count++)//This loop print the numbers.
  {
   printf("\t\t%d",num);
   num++;
  }
  count1++;
 }

 getch();
 return 0;
}