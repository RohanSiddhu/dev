#include <iostream>
using namespace std;

int main()
{
    char s[100001]={0};
    unsigned long i;
    
    cin>>s;
    
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='x')
        {
            cout<<"Not Safe";
            break;
        }
    }
    
    if(s[i]==0)
    {
        cout<<"Safe";
    }
    
    return 0;
}