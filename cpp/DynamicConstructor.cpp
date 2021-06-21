/**
 * File: DynamicConstructor.cpp
 * Description: Use dynamic constructor to initialize an array and counts the number of prime and composite elements.
 * Coded By: Rohan Siddhu
 * Date: 31/03/2020
 **/

#include <iostream>
#include <stdlib.h>

bool IsPrime(int num);  // Return true if the perimeter passed is prime else return false.

class Array
{
    private:
        int n;  // Number of array elements.
        int *arr;   // Pointer to the dynamic array.
    public:
    /* Constructor overloaded */
        Array()
        {
            /* Default Constructor */
            n = 0;
        }
        Array(int num)
        {
            /* Dynamic Constructor */
            n = num;
            arr = new (std::nothrow) int[n];    // Allocating memory for array.
            if(arr == NULL)
            {
                /* Memory allocation failure handling. */
                std::cout << "\nMemory overflow!!" << "\n\n    Press Enter to exit...";
                std::cin.get();
                exit(1);
            }

            for(int i = 0; i < n; i++)
            {
                /* Taking Input */
                std::cout << "Element " << i + 1<< " : ";
                std::cin >> arr[i];
            }
            std::cin.ignore();
        }

        int CountPrime();   // Return the number of prime elements.
        int CountComposite();   // Return the number of composite elements.
};

int Array::CountPrime()
{
    int count = 0;
            
    for(int i = 0; i < n; i++)
    {
        if(IsPrime(arr[i]))
            count++;
    }

    return count;
}

int Array::CountComposite()
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 1)
            continue;
        if(!IsPrime(arr[i]))
            count++;
    }

    return count;
}

bool IsPrime(int num)
{
    int a = 3;

    if(num == 1)
        return false;
    if(num == 2 || num == 3)
        return true;
    if(num % 2 == 0)
        return false;
    while(a < num / 2)
    {
        if(num % a == 0)
            return false;
        
        a += 2;
    }

    return true;
}

/* main function starts */

int main()
{
    int size;
    system("cls");

    std::cout << "\nEnter the size of array: ";
    std::cin >> size;
    Array list(size);

    std::cout << "\nNumber of Prime Elements are " << list.CountPrime();
    std::cout << "\nNumbet of Composite Elements are " << list.CountComposite();

    std::cout << "\n\nPress Enter To Exit...";
    std::cin.get();
    return 0;
}