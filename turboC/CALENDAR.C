/*This program prints the calendar of the month entered by the user.*/
//Coded by: Rohan Siddhu
//Date: 24/07/2018
#include<stdio.h>
#include<conio.h>
#include<dos.h>

/*Function's prototypes*/
int leapyear(int);
int n_leapyear(int,int);
int getkey();

int main()
{
 char *days[]={"Mon","Tue","Wed","Thr","Fri","Sat","Sun"};
 char *month_name[]={"January","February","March","April","May","June","July",
		  "August","September","October","November","December"};
 int month_code[]={31,28,31,30,31,30,31,31,30,31,30,31};
 unsigned int day_code=0,year=2001,month,key,rem,i,a;
 clrscr();

/*Takes input*/
 printf("Enter year: ");
 scanf("%d",&year);
 printf("Enter month: ");
 scanf("%d",&month);

 while(1)
 {
/*Calculate the day code*/
  if(year>=2001)
   day_code=((year-2001)+n_leapyear(2001,year))%7;
  else
   day_code=7-((2001-year)+n_leapyear(year,2001))%7;
  for(i=1; i<month; i++)
   day_code+=month_code[i-1];
  if(leapyear(year) && month>2)
   day_code++;
  day_code=day_code%7;

/*Prints the month's name and the year*/
  clrscr();
  gotoxy(28,3);
  printf("%c",17);
  printf(" %s ",month_name[month-1]);
  printf("%c",16);
  gotoxy(50,2);
  printf("%c",30);
  gotoxy(48,3);
  printf("%d",year);
  gotoxy(50,4);
  printf("%c",31);
  printf("\n\n");

/*Prints the calendar*/
  for(i=0; i<7; i++)
   printf("%10s",days[i]);

  printf("\n\n");
  for(i=0,a=0; i<day_code; i++,a++)
   printf("%10c",32);

  for(i=1; i<=month_code[month-1]; i++,a++)
  {
   rem=a%7;
   if(rem==0 && a!=0)
    printf("\n\n");
   printf("%10d",i);
  }

  if(leapyear(year) && month==2)
   printf("%10d",29);

  key=getkey();
  if(key==75 && month>1) //Left arrow key.
   month--;
  else if(key==75 && month==1)
  {
   month=12;
   year--;
  }
  if(key==77 && month<12) //Right arrow key
   month++;
  else if(key==77 && month==12)
  {
   month=1;
   year++;
  }
  if(key==72) //Up arrow key.
   year++;
  if(key==80) //Down arrow key.
   year--;
  if(key==27) //ESC kay.
   exit();
 }
}

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