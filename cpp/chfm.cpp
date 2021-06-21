#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char* argv[])
{
    unsigned short t=1;
    unsigned long n=2;
    unsigned long a[100000ul]={0};
    unsigned long long sum=0, avg=0, coin=0;

    cin>>t;

    while(t--)
    {
        cin>>n;
        sum=0;

        for(unsigned long i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

        if((sum%n)==0)
        {
            avg=sum/n;
            coin=sum-(avg*(n-1));

            for(unsigned long i=0; i<n; i++)
            {
                if(coin==a[i])
                {
                    cout<<i+1<<"\n";
                    break;
                }
                else if(i==(n-1))
                {
                    cout<<"Impossible\n";
                }
            }
        }
        else
            cout<<"Impossible\n";
    }

    getch();
    return 0;
}
