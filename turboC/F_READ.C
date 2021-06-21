//This program reads a text document.
//Coded by: Rohan Siddhu
//Date: 12/08/2018
#include<stdio.h>
#include<conio.h>

int main()
{
 FILE *fp;
 char ch;
 clrscr();

 fp=fopen("FILE\\BALAGURU.TXT", "r");
 if(fp==NULL)
 {
  printf("Unable to open file!");
  getch();
  exit(1);
 }
 while(1)
 {
  ch=fgetc(fp);
  if(ch==EOF)
   break;

  printf("%c",ch);
 }
 printf("\n");
 getch();
 fclose(fp);
 return 0;
}