/* This program use bubble sort to sort an array */
// Coded By: Rohan Siddhu
// Date: 19/04/2019

#include <iostream>
#include <conio.h>
#include <stdlib.h>

#define SIZE 10
#define INPUT

int main(int argc, char * argv[])
{
 int arr[SIZE]={0}, i=0;

 system("cls");

 std::cout<<"\nEnter "<<SIZE<<" elements :\n\n\t";

#ifdef INPUT
 for(i=0; i<SIZE; i++)
  std::cin>>arr[i];
#endif

 for(int up=SIZE-1, temp=0; up; up--)
  {
   for(i=0; i<up; i++)
   {
    if(arr[i]>arr[i+1])
    {
     temp=arr[i];
     arr[i]=arr[i+1];
     arr[i+1]=temp;
    }
   }
  }

 for(i=0; i<SIZE; i++)
 {
  std::cout.width(4);
  std::cout<<arr[i];
 }

 getch();
 return 0;
}