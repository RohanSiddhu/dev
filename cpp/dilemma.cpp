#include <iostream>
using namespace std;

int main()
{
 unsigned short T=1;
 char S[100001]={0};
 unsigned long count=0;

 cin>>T;

 while(T--)
 {
  count=0;
  cin>>S;

  for(unsigned long i=0; S[i]!='\0'; i++)
  {
   if(S[i]=='1')
    count++;
  }

  if(count&1)
   cout<<"WIN\n";
  else
   cout<<"LOSE\n";
 }

 return 0;
}