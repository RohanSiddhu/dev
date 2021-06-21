/* This program use Insertion Sort to sort an array in ascending order */
// Coded By: Rohan Siddhu
// Date: 20/04/2019

#include <iostream>
#include <conio.h>
#include <stdlib.h>

#define SIZE 10
#define INPUT

int main(int argc, char * argv[])
{
 int arr[SIZE]={0};
 unsigned int i=0;

 system("cls");

#ifdef INPUT
 std::cout<<"\nEnter "<<SIZE<<" elements:\n\n";

 for(i=0; i<SIZE; i++)
  std::cin>>arr[i];
#endif

 for(int select=0, lock=0, temp=0; select<SIZE; select++, lock=select)
 {
  for(i=select-1; i<select; i--, lock--)
  {
   if(arr[i]>arr[lock])
   {
    temp=arr[lock];
    arr[lock]=arr[i];
    arr[i]=temp;
   }
   else
    break;
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