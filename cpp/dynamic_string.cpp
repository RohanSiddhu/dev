/**
 * File: dynamic_string.cpp
 * Description: This program dynamicaly allocates space for string and use copy constuctor to initialize it.
 * Coded By: Rohan Siddhu
 * Date: 2/04/2020
 **/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class String
{
    private:
        char *s;
    public:
        String(String &str)
        {
            s = new (std::nothrow) char[strlen(str.s) + 1];
            if(s == NULL)
            {
                std::cout << "\nUnable to allocate memory!!!\n\nPress Enter to Exit...";
                std::cin.get();
                exit(1);
            }

            strcpy(s, str.s);
        }
        String(int n)
        {
            s = new (std::nothrow) char[n];
            if(s == NULL)
            {
                std::cout << "\nUnable to allocate memory!!!\n\nPress Enter to Exit...";
                std::cin.get();
                exit(1);
            }

            std::cout << "Enter string: ";
            scanf("%[^\n]%*c", s);
        }
        String(const char * str)
        {
            s = new (std::nothrow) char[strlen(str) + 1];
            if(s == NULL)
            {
                std::cout << "\nUnable to allocate memory!!!\n\nPress Enter to Exit...";
                std::cin.get();
                exit(1);
            }

            strcpy(s, str);
        }

        void Print();
};

void String::Print()
{
    std::cout << s << std::endl;
}

int main()
{
    String str("Hello World!!");
    String str1(str);
    String str2(20);
    system("cls");

    str.Print();
    str1.Print();
    str2.Print();

    printf("\n\nPress Enter To Exit...");
    std::cin.get();
    return 0;
}