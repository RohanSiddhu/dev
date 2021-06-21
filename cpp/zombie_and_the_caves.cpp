#include <iostream>
using namespace std;

int main()
{
 unsigned short T=1;
 unsigned long N=1;
 long C[100000]={0}, H[100000]={0};
 unsigned long long radiation=0, health=0;
 long i;
 long temp=0;

 cin>>T;

 while(T--)
 {
  radiation=0; health=0;
  cin>>N;

  for(i=0; i<N; i++)
  {
   cin>>C[i];
   radiation+=( (i+1+C[i])-(i+1-C[i])+1 );
   if( (i+1-C[i])<1 && (i+1+C[i])>N)
    radiation-=( (i+1+C[i])-(i+1-C[i])+1 )-N;
   else
    if((i+1-C[i]<1))
     radiation-=1-(i+1-C[i]);
    else if((i+1+C[i])>N)
     radiation-=(i+1+C[i])-N;
  }
  
  for(i=0; i<N; i++)
  {
   cin>>H[i];
   health+=H[i];
  }
  
  if(health==radiation)
   cout<<"YES\n";
  else
   cout<<"NO\n";
 }

 return 0;
}