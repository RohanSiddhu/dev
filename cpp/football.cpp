//Coded By: Rohan Siddhu
//Date: 07/08/2019

#include <iostream>

using namespace std;

int main(int argv, char * argc[])
{
 unsigned short T=1, N=1;
 unsigned short A[150]={0}, B[150]={0};
 long maximum=0, temp=0;

 cin>>T;
 while(T--)
 {
  cin>>N;

  for(unsigned short i=0; i<N; i++)
   cin>>A[i];

  for(unsigned short i=0; i<N; i++)
   cin>>B[i];

  if((maximum=A[0]*20-B[0]*10)<0)
   maximum=0;

  for(unsigned short i=1; i<N; i++)
  {
   if((temp=A[i]*20-B[i]*10)>maximum)
    maximum=temp;
  }

  cout<<maximum<<"\n";
 }

return 0;
}
