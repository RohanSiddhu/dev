#include<stdio.h>
#include<conio.h>
void main()
{
int mark1,mark2,mark3,marks;
clrscr();
printf("Enter marks of first subject\n");
scanf("%d",&mark1);
printf("Enter marks of second subject\n");
scanf("%d",&mark2);
printf("Enter marks of third subject\n");
scanf("%d",&mark3);
if(mark1>100 ||mark1<0 || mark2>100||mark2<0 || mark3>100||mark3<0)
{
printf("Invalid marks");
}
else
{
marks=(mark1 + mark2 + mark3)/3;
if(marks>80)
{
printf("A+ grade");
}
else if(marks>70 && marks<=80)
{
printf("A grade");
}
else if(marks>60 && marks<=70)
{
printf("B grade");
}
else if(marks>50 && marks<=60)
{
printf("C grade");
}
else if(marks>40 && marks<=50)
{
printf("D grade");
}
}
getch();
}