//This program delete the occurence of word 'the' from the sentence.
//Coded by: Rohan Siddhu
//Date: 31/07/2018
#include<stdio.h>
#include<conio.h>

int main()
{
 char sentence[80];
 char *p;
 int i,a=0;
 clrscr();

 printf("\tEnter the sentense:\n\n\t\t");
 gets(sentence);

 for(i=0; sentence[i]!='\0'; i++)
 {
  if(sentence[i]=='t' || sentence[i]=='T')
   if(sentence[i+1]=='h' || sentence[i+1]=='H')
    if(sentence[i+2]=='e' || sentence[i+2]=='E')
     if(sentence[i+3]==32)
      i+=4;
  *(p+a)=sentence[i];
  a++;
 }
 *(p+a)='\0';

 printf("\n\tNew sentence:\n\n\t\t%s",p);

 getch();
 return 0;
}