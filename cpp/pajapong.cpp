#include <iostream>

int main(int argc, char *argv[])
{
    unsigned long T=1, x=0, y=0, k=1, r;

    std::cin>>T;

    while(T--)
    {
        std::cin>>x>>y>>k;

        r=(x+y)/k;
        std::cout<<x+y;

        if((r&1))
            std::cout<<"Paja\n";
        else
            std::cout<<"Chef\n";
    }

    return 0;
}
