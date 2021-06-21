/* This program prints the command line arguments */
// Coded By: Rohan Siddhu
// Date: 20/04/2019

#include <iostream>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 system("cls");

 std::cout<<*(argv+1);

 getch();
 return 0;
}