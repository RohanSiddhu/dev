//Coded by: Rohan Siddhu
//Date: 09/10/2018

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

void xstrrev(char *);

short i, j;

/* main function starts */
int main(void)
{
 char num1[51], num2[51], product[201];
 short val=0;
 extern short i, j;

 for(i=0; i<200; i++) //initializing all elements of product to 0.
  product[i]=0;

/* taking input */
 std::cout<<"\nEnter first number: ";
 std::cin>>num1;
 strrev(num1);
 num1[strlen(num1)]='\n';
 std::cout<<"Enter second number: ";
 std::cin>>num2;
 strrev(num2);
 num2[strlen(num2)]='\n';

 for(i=0; num1[i]!='\n'; i++)
  num1[i]-=48;
 for(i=0; num2[i]!='\n'; i++)
  num2[i]-=48;

/* calculating the result */
 for(i=0; num1[i]!='\n'; i++)
  for(j=0; num2[j]!='\n'; j++)
  {
   val=(product[i+j]+num1[i]*num2[j])%10;
   product[i+j+1]+=(product[i+j]+num1[i]*num2[j])/10;
   product[i+j]=val;

  }
  product[i+j]='\n';
  xstrrev(product);
  for(i=0; product[i]!='\n'; i++)
   std::cout<<int(product[i]);

 getch();
 return 0;
}

void xstrrev(char *p)
{
 char *l;
 extern short i,j;

 for(l=p; *(l+1)!='\n'; l++)
 {}
 for(i=0; *(p+i)!='\n' && p!=l; i++, p++, l--)
 {
  j=*p;
  *p=*l;
  *l=j;
 }
}
