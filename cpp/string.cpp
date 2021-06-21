#include <iostream>
#include <conio.h>

int main()
{
    int str[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *a;

    a=str+1;
    std::cout<<*a;

    getch();
    return 0;
}
