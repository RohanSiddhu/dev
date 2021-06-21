//This program count chars, spaces, tabs and new line in a file.
//Coded by: Rohan Siddhu
//Date: 13/08/2018
#include<stdio.h>
#include<conio.h>

int main()
{
 FILE *fp;
 char ch;
 unsigned long nol=0, not=0, nob=0, noc=0;
 clrscr();

 fp=fopen("PUZZLE.C", "r");
 while(1)
 {
  ch=fgetc(fp);
  if(ch==EOF)
   break;
  noc++;
  if(ch==' ')
   nob++;
  if(ch=='\n')
   nol++;
  if(ch=='\t')
   not++;
 }
 fclose(fp);
 printf("\nNumber of characters: %lu",noc);
 printf("\nNumber of blanks: %lu", nob);
 printf("\nNumber of lines: %lu",nol);
 printf("\nNumber of tabs: %lu",not);

 getch();
 return 0;
}