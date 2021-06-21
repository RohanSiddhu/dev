/* This program sort an array in ascending order by using Selection Sort */
// Coded By: Rohan Siddhu
// Date: 18/04/2019

#include <iostream>
#include <conio.h>
#include <stdlib.h>

#define SIZE 10
#define INPUT

int main(int argc, char * argv[])
{
 int arr[SIZE]={0}, select=0;

 system("cls");

#ifdef INPUT
 std::cout<<"\nEnter "<<SIZE<<" elements:\n\n";

 for(int i=0; i<SIZE; i++)
 {
  std::cin>>arr[i];
 }
#endif

 for(int check=0, temp=0; select<SIZE; select++)
 {
  for(check=select+1; check<SIZE; check ++)
  {
   if(arr[check]<arr[select])
   {
    temp=arr[select];
    arr[select]=arr[check];
    arr[check]=temp;
   }
  }
 }

 std::cout<<"\n";

 for(select=0; select<SIZE; select++)
 {
  std::cout.width(4);
  std::cout<<arr[select];
 }

 getch();
 return 0;
}