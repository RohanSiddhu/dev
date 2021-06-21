#include <iostream>

struct lList
{
    long long data = 0;
    lList* address;
};

int main()
{
    lList a;
    std::cout << a.data;
    std::cin.get();
    return 0;
}