#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    std::ifstream InFile;
    char ch;
    int CharCount = 0, LineCount = 0;
    std::string FileName;

    if(argc > 1)
        FileName = argv[1];
    else
    {
        std::cout << "\n Enter File Name: ";
        std::getline(std::cin, FileName);
    }


    InFile.open(FileName);
    if(!InFile)
    {
        std::cout << "\n Error Opening The File!!";
        exit(1);
    }

    while(!InFile.eof())
    {
        ch = InFile.get();
        if(ch == '\n')
            LineCount++;
        CharCount++;
    }

    if(CharCount > 0)
    {
        std::cout << "\n In File \"" << FileName << "\" there are " << LineCount << " lines and " << CharCount << " characters." << std::endl;
    }
    else
    {
        std::cout << "\n File is Empty." << std::endl;
    }
    
    InFile.close();

    std::cin.get();
    return 0;
}