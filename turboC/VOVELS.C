//This program omits all the voviels from a sentence.
//coded by: Rohan Siddhu
//Date:29/07/2018
#include<stdio.h>
#include<conio.h>

#define TRUE sentence[i]!='a'&&sentence[i]!='A'&&sentence[i]!='e'&&\
	     sentence[i]!='E'&&sentence[i]!='i'&&sentence[i]!='I'&&\
	     sentence[i]!='o'&&sentence[i]!='O'&&sentence[i]!='u'&&\
	     sentence[i]!='U'

int main()
{
 char sentence[81];
 char *p;
 int i=0,a=0;
 clrscr();

 printf("\nEnter the sentence:\n\n\t");
 gets(sentence);
 while(sentence[i]!='\0')
 {
  if(TRUE)
  {
   *(p+a)=sentence[i];
   a++;
  }
  i++;
 }
 *(p+a)='\0';

 printf("\nNew sentence:\n\n\t");
 printf("%s",p);

 getch();
 return 0;
}