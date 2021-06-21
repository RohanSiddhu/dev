#include <iostream>
using namespace std;

int main()
{
 unsigned short t;
 unsigned short n, m;
 signed short c[100], k, l, r;
 signed long p[100];
 signed long price=-1;
 unsigned short t1, t2, i;

 cin>>t;

 while(t--)
 {
  price=-1;
  cin>>n>>m>>k>>l>>r;

  for(i=0; i<n; i++)
  {
   cin>>c[i]>>p[i];
  }

  if(l>k)
  {
   t1=l+m; t2=r+m;
  }
  else if(r<k)
  {
   t1=l-m; t2=r-m;
  }
  else if(l<=k)
  {
   t1=l-m; t2=r+m;
  }

  for(i=0; i<n; i++)
  {
   if(t1<=c[i] && c[i]<=t2)
   {
    if(price==-1)
     price=p[i];
    else if(p[i]<price)
     price=p[i];
   }
  }

  cout<<price<<"\n";
 }

 return 0;
}