//This program prints all the possible combinations of alphabets and numbers.
//Coded by: Rohan Siddhu
//Date:
#include<stdio.h>
#include<conio.h>

int main()
{
 register char a,b,c,d,e,f,g,h,i,j;
 clrscr();

 for(a=0; a<10; a++)
  for(b=0; b<10; b++)
   for(c=0; c<10; c++)
    for(d=0; d<10; d++)
     for(e=0; e<10; e++)
      for(f=0; f<10; f++)
       for(g=0; g<10; g++)
	for(h=0; h<10; h++)
	 for(i=0; i<10; i++)
	  for(j=0; j<10; j++)
	   printf("%d%d%d%d%d%d%d%d%d%d\n",a,b,c,d,e,f,g,h,i,j);

 getch();
 return 0;
}