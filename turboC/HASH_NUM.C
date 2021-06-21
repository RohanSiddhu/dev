//This program prints the number entered by the user in big format.
//coded by: Rohan Siddhu
//Date: 18/08/2018
#include<stdio.h>
#include<conio.h>

void one(void);
void two(void);
void three(void);
void four(void);
void five(void);
void six(void);
void seven(void);
void eight(void);
void nine(void);
void zero(void);

short i,x=3,y=6; //Loop counter.

int main(void)
{
 extern short i,x;
 int arr[5];
 long num;
 short j;
 clrscr();

 printf("Enter a 5-digit number: ");
 scanf("%ld",&num);

 clrscr();
 for(i=4; i>=0; i--)
 {
  arr[i]=num%10;
  num=num/10;
 }

 for(j=0; j<5; j++,x++)
  switch(arr[j])
  {
   case 0:
    zero();
    break;

   case 1:
    one();
    break;

   case 2:
    two();
    break;

   case 3:
    three();
    break;

   case 4:
    four();
    break;

   case 5:
    five();
    break;

   case 6:
    six();
    break;

   case 7:
    seven();
    break;

   case 8:
    eight();
    break;

   case 9:
    nine();
    break;
  }

 getch();
 return 0;
}

void one(void)
{
 extern short i,x,y;

 x*=7;
 for(i=8,y=6; i; i--,y++)
 {
  gotoxy(x,y);
  if(i==7)
   printf("##");
  else if(i==1)
   printf("###");
  else
   printf(" #");
 }
 x/=7;
}

void two(void)
{
 extern short i,x,y;

 x*=7;
 for(i=8,y=6; i; i--,y++)
 {
  gotoxy(x,y);
  if(i==8 || i==4 || i==1)
   printf("#####");
  else if(i>4 && i<8)
   printf("    #");
  else
   printf("#");
 }
 x/=7;
}

void three(void)
{
 extern short i,x,y;

 x*=7;
 for(i=8,y=6; i; i--,y++)
 {
  gotoxy(x,y);
  if(i==8 || i==5 || i==1)
   printf("#####");
  else
   printf("    #");
 }
 x/=7;
}

void four(void)
{
 extern short i,x,y;

 x*=7;
 for(i=7,y=6; i; i--,y++)
 {
  gotoxy(x,y);
  if(i>3)
   printf("#");
  else if(i==3)
  {
   printf("#  # ");
   gotoxy(x,++y);
   printf("#####");
  }
  else
   printf("   #");
 }
 x/=7;
}

void five(void)
{
 extern short i,x,y;

 x*=7;
 for(i=8,y=6; i; i--,y++)
 {
  gotoxy(x,y);
  if(i==8 || i==5 || i==1)
   printf("#####");
  else if(i>5)
   printf("#");
  else
   printf("    #");
 }
 x/=7;
}

void six(void)
{
 extern short i,x,y;

 x*=7;
 for(i=8,y=6; i; i--,y++)
 {
  gotoxy(x,y);
  if(i==8 || i==5 || i==1)
   printf("#####\n");
  else if(i>5)
   printf("#\n");
  else
   printf("#   #\n");
 }
 x/=7;
}

void seven(void)
{
 extern short i,x,y;

 x*=7;
 for(i=8,y=6; i; i--,y++)
 {
  gotoxy(x,y);
  if(i==8)
   printf("#####\n");
  else
   printf("    #\n");
 }
 x/=7;
}

void eight(void)
{
 extern short i,x,y;

 x*=7;
 for(i=8,y=6; i; i--,y++)
 {
  gotoxy(x,y);
  if(i==8 || i==5 || i==1)
   printf("#####\n");
  else
   printf("#   #\n");
 }
 x/=7;
}

void nine(void)
{
 extern short i,x,y;

 x*=7;
 for(i=8,y=6; i; i--,y++)
 {
  gotoxy(x,y);
  if(i==8 || i==5 || i==1)
   printf("#####\n");
  else if(i>5)
   printf("#   #\n");
  else
   printf("    #\n");
 }
 x/=7;
}

void zero(void)
{
 extern short i,x,y;

 x*=7;
 for(i=8,y=6; i; i--,y++)
 {
  gotoxy(x,y);
  if(i==8 || i==1)
   printf("#####\n");
  else
   printf("#   #\n");
 }
 x/=7;
}