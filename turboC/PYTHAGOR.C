//To check the Pythagoras' triplet.
//Author:Rohan Siddhu
//Date:25/11/2017
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
 int a,b,c,d,e,f;
 clrscr();

 printf("Enter the three numbers: \n");
 scanf("%d\n %d\n %d",&a,&b,&c);

 d=a*a;
 e=b*b;
 f=c*c;

 if(a>b && a>c && d==e+f)
 {
  printf("Yes, it is a Pythagoras' triplet. \n\n");
 }
 else if(b>a && b>c && e==d+f)
 {
  printf("Yes, it is a Pythagoras' triplet. \n\n");
 }
 else if(c>a && c>b && f==d+e)
 {
  printf("Yes, it is a Pythagoras' triplet. \n\n");
 }
 else
 {
  printf("No, it is not a Pythagoras' triplet. \n\n");
 }

 printf("Enter any key to exit.");

 getch();
 return 0;
}