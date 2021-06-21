/*To find the youngest of the three.*/
/*Author:Rohan Siddhu*/
/*Date:27/09/2017*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
 int ram,shyam,ajay;
 clrscr();

 printf("Enter Ram's age:");
 scanf("%d",&ram);
 printf("Enter Shyam's age:");
 scanf("%d",&shyam);
 printf("Enter Ajay's age:");
 scanf("%d:",&ajay);

 if(ram<shyam,ram<ajay)
 {
  printf("Ram is the youngest of the three.");
 }
 else if(shyam<ram,shyam<ajay)
 {
  printf("Shyam is the youngest of the three.");
 }
 else if(ajay<ram,ajay<shyam)
 {
  printf("Ajay is the youngest of the three.");
 }
 else
 {
  printf("All three are equal in age.");
 }
 getch();
 return 0;
 }