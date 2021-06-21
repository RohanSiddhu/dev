/*This program sorts the names entered by the user*/
//Coded by: Rohan Siddhu
//Date: 17/07/2018
#include<stdio.h>
#include<conio.h>
#include<string.h>

#define NUM 6

int main()
{
 char *names[NUM];
 char str[25];
 int length,i,j;
 char *p;
 clrscr();

 for(i=0; i<NUM; i++)
 {
  printf("Enter name %d : ",i+1);
  gets(str);

  length=strlen(str);
  p=(char *)malloc(length+1);
  strcpy(p,str);
  names[i]=p;
 }

 for(i=NUM-1; i; i--)
  for(j=0; j<i; j++)
   if(strcmp(names[j],names[j+1])>0)
   {
    strcpy(str,names[j]);
    strcpy(names[j],names[j+1]);
    strcpy(names[j+1],str);
   }

 printf("  Sorted names:");

 for(i=0; i<NUM; i++)
  printf("\n%s",names[i]);

 getch();
 return 0;
}