#include <iostream>
using namespace std;

int main()
{
    unsigned short n=1;
    unsigned long grid[14][14];
    
    cin>>n;
    
    for(unsigned short i=0; i<n; i++)
    {
        for(unsigned short j=0; j<n; j++)
        {
            cin>>grid[i][j];
        }
    }
}