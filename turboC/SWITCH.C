//This program uses switch case and provide user the different options.
//Coded by:Rohan Siddhu
//Date:11/03/2018
#include<stdio.h>
#include<conio.h>

void main()
{
 short int choise,terminate=1;
 unsigned short int fact;
 unsigned long int c,b,i,prime,rem,p,num;
 clrscr();

 while(terminate!=4)
 {
  clrscr();

  printf("\n1. Factorial of a number.");
  printf("\n2. Prime or Composit.");
  printf("\n3. Odd or Even.");
  printf("\n4. Exit.");
  printf("\nChoose:");
  scanf("%d",&choise);

  switch(choise)
  {
   case 1:
   {
    clrscr();

    printf("Enter any number:");
    scanf("%u",&fact);

    if(fact==1 || fact==0)
    {
     printf("Factorial of %u is:1",fact);
    }
    else
    {
     c=1;
     b=1;
     for(i=1; i<=fact; i++)
     {
      c=i*b;
      b=c;
     }
     printf("%lu",c);
    }
    printf("\n\nPress enter to back on home screen.");
    getch();
    break;
   }

   case 2:
   {
    clrscr();

    printf("Enter any number:");
    scanf("%lu",&prime);

    if(prime==1) //When input=1
    {
     printf("\nNeithe Prime nor Composit.",prime);
    }
    else //When input is opther than one
    {
     for(p=2; p<prime; p++)
     {
      rem=prime%p;

      if(p==prime/2 || prime==2)
      {
       printf("Prime.");
       break;
      }
      else if(rem==0)
      {
       printf("Not Prime.");
      }
     }
    }
    printf("\n\nPress enter to back on home screen.");
    getch();
    break;
   }

   case 3:
   {
    clrscr();

    printf("Enter any number:");
    scanf("%lu",&num);

    if(num%2==0)
    {
     printf("Even.");
    }
    else
    {
     printf("Odd.");
    }
    printf("\n\nPress enter to back on home screen.");
    getch();
    break;
   }

   case 4:
   {
    terminate=choise;
    break;
   }
  }
 }
}