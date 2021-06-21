#include <iostream>
#include <conio.h>

bool is_prime(unsigned long long);

int main()
{
    unsigned long long num;

    std::cout<<"Enter any number";
    std::cin>>num;

    if(is_prime(num))
        std::cout<<"\nPrime";
    else
        std::cout<<"\nNot Prime";

    getch();
    return 0;
}

bool(unsigned long long num)
{

}
