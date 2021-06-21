//Match Stick Game.
//Coded by:Rohan Siddhu
//Date:08/02/2018
#include<stdio.h>
#include<conio.h>

int main()
{
 int user,comp,stick,i;
 clrscr();

 printf("Match Stick Game \n\n Rules-");
 printf("\n1.There are 21 match sticks.");
 printf("\n2.User can pick 1 to 4 sticks.");
 printf("\n3.After user computer will pick.");
 printf("\n4.Who will pick the last stick will loose. \n\n Start");

 for(stick=21; stick>=1;)
 {
  printf("\n\n %d stick.",stick);

  for(i=stick; i>=1; i--)
  {
   printf(" I");
  }

  printf("\n Chose:");
  scanf("%d",&user);

  if(user<=4 && user>=1)
  {
   stick=stick-user;
   comp=5-user;

   printf("\n %d stick.",stick);

   for(i=stick; i>=1; i--)
   {
    printf(" I");
   }

   printf("\n Computer chose:%d",comp);

   stick=stick-comp;
  }
  else
  {
   printf("You chose wrong number! \n Chose from 1 to 4.");
  }
 }

 printf("\n\n     Game Over! \n     You loose!");
 printf("\n\n\nPress enter to exit.");

 getch();
 return 0;
}