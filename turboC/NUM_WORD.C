//This program prints out the number in words.
//Coded by: Rohan Siddhu
//Date: 11/08/2018
#include<stdio.h>
#include<conio.h>

void convert(unsigned long,int *);

int main()
{
 char *str1[]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine",
	       "Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen",
	       "Sixteen","Seventeen","Eighteen","Nineteen"};
 char *str2[]={"Twenty","Thirty","Fourty","Fiftey","Sixtey","Seventy",
	       "Eightey","Ninety"};
 char *str3[]={"Million","Thousand","Hundred"};
 short num_arr[]={0,0,0,0,0,0,0,0,0};
 short i;
 unsigned long num;
 clrscr();

 printf("Enter the number(not greater than 9-digits): ");
 scanf("%lu",&num);

 convert(num,num_arr);

 for(i=0; i<9; i++)
 {
  if(num_arr[i]!=0)
  {
   if(i==0 || i==3 || i==6)
   {
    printf("%s ",str1[num_arr[i]-1]);
    printf("%s ",str3[2]);
   }
   if(i==1 || i==4 || i==7)
   {
    if(num_arr[i]==1)
     printf("%s ",str1[9+num_arr[i+1]]);
    else
     printf("%s ",str2[num_arr[i]-2]);
   }
   if(i==2 || i==5 || i==8)
   {
    if(num_arr[i-1]!=1)
     printf("%s ",str1[num_arr[i]-1]);
   }
   if(i==2)
    printf("%s ",str3[0]);
   if(i==5)
    printf("%s ",str3[1]);
  }
 }

 getch();
 return 0;
}

void convert(unsigned long x,int *p)
{
 int i;
 p+=8;
 for(i=0; i<9; i++,p--)
 {
  *p=x%10;
  x/=10;
 }
}