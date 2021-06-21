/******************************************************************  CALENDAR  ****************************************************************************************/


/*This program prints the calendar of the month entered by the user.*/
//Coded by: Rohan Siddhu
//Date: 24/07/2018

/* Files included */

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

/* Function's prototype declaration */

int leapyear(int);
int n_leapyear(int,int);
int getkey();
//void gotoxy(short x, short y);

/* Function prototype declaration ends */


/* Global declaration */

HANDLE hStdout=GetStdHandle(STD_OUT_HANDLE);

typedef struct COORD
{
 short x;
 short y;
};

/* Global declaration end */

inline void gotoxy(short col, short row)
{
 COORD position={col, row};

 SetConsoleCursorPosition(hStdout, position);
}

/* main function starts */

int main(int argc, char *argv[])
{
  /* variable declaration */

 char special=0;
 char *days[]={"Mon","Tue","Wed","Thr","Fri","Sat","Sun"};
 char *month_name[]={"January","February","March","April","May","June","July",
		  "August","September","October","November","December"};
 unsigned short month_code[]={31,28,31,30,31,30,31,31,30,31,30,31};
 unsigned short day_code=0,year=2001,month,key,rem,i,a;

  /* variable declaration end */

 system("cls");                            // Clears the console screen.

  /* Taking input */

 if(argc<2)
 {
  std::cout<<"Enter year: ";
  std::cin>>year;
  std::cout<<"Enter month: ";
  std::cin>>month;
 }
 else
 {
  year=atoi(argv[1]);
  month=atoi(argv[2]);
 }

  /* Input end */

 while(1)
 {

   /* Calculating the day code */

  if(year>=2001)
   day_code=((year-2001)+n_leapyear(2001,year))%7;
  else
   day_code=7-((2001-year)+n_leapyear(year,2001))%7;
  for(i=1; i<month; i++)
   day_code+=month_code[i-1];
  if(leapyear(year) && month>2)
   day_code++;
  day_code=day_code%7;

   /* Printing the month's name and the year */

  system("cls");

  gotoxy(28,3);
  special=17;
  std::cout<<special;
  std::cout<<month_name[month-1];
  special=16;
  std::cout<<special;
  gotoxy(50,2);
  special=30;
  std::cout<<special;
  gotoxy(48,3);
  std::cout<<year;
  gotoxy(50,4);
  special=31;
  std::cout<<special;
  std::cout<<"\n\n";

   /* Printing the calendar */

  for(i=0; i<7; i++)
  {
   std::cout.width(10);
   std::cout<<days[i];
  }

  std::cout<<"\n\n";
  for(i=0,a=0; i<day_code; i++,a++)
   printf("%10c",32);

  for(i=1; i<=month_code[month-1]; i++,a++)
  {
   rem=a%7;
   if(rem==0 && a!=0)
    std::cout<<"\n\n";
    std::cout.width(10);
    std::cout<<i;
  }

  if(leapyear(year) && month==2)
  {
   std::cout.width(10);
   std::cout<<29;
  }

  while(1)
  {
   key=getkey();

   if(key==75 || key==77 || key==72 || key==80 || key==27)
    break;
  }

  if(key==75 && month>1)                        //Left arrow key.
   month--;
  else if(key==75 && month==1)
  {
   month=12;
   year--;
  }
  if(key==77 && month<12)                      //Right arrow key
   month++;
  else if(key==77 && month==12)
  {
   month=1;
   year++;
  }
  if(key==72)                                 //Up arrow key.
   year++;
  if(key==80)                                //Down arrow key.
   year--;
  if(key==27)                               //ESC kay.
   break;
 }

 return 0;
}

/* main function end */


/*This function returns the number of leap years between two years.*/

int n_leapyear(int smaller, int greater)
{
 int num=0;
 while(smaller<greater)
 {
  num+=leapyear(smaller);
  smaller++;
 }
 return num;
}


/*This function returns 1 if year is leap year else return 0.*/

int leapyear(int year)
{
 int rem;
 rem=year%100;
 if(rem)
 {
  rem=year%4;
  if(!rem)
   return 1;
 }
 else
 {
  rem=year%400;
  if(!rem)
   return 1;
 }
 return 0;
}


/*This function returns the scan code of keys.*/

int getkey()
{
 int ch;
 ch=getch();
 if(ch==0)
 {
  ch=getch();
  return ch;
 }
 return ch;
}


/* This function set the cursor on the desired position on the console window */

/*void gotoxy(short x, short y)
{
 HANDLE hStdout=GetStdHandle(STD_OUTPUT_HANDLE);
 COORD position={x, y};
 SetConsoleCursorPosition(hStdout, position);
}*/