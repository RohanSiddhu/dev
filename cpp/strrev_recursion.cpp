/* This program use recursion to reverse a string. */
// Coded by: Rohan Siddhu
// Date:
#include <iostream>
#include <conio.h>
#include <stdio.h>

void strrev(char *);

int main()
{
    char str[40];

    std::cout<<"Enter a string:\n\n\t\t";
    gets(str);

    strrev(str);

    std::cout<<"\nReversed string ->\n\n\t\t" <<str;

    getch();
    return 0;
}

void strrev(char *p)
{
    char *t, temp=0, terminate, i;

    for(t=p; *(t+1)!='\0'; t++, temp++){}

    terminate=temp/2;

    for(i=0; i<=terminate; i++, p++, t--)
    {
        temp=*p;
        *p=*t;
        *t=temp;
    }
}
