/**
 * This program is to check whether the input number is prime or not.
 * 
 * Coded By: Rohan Siddhu
 * Date: 30/07/2021
 */

#include <iostream>
#include "is_prime.h"

int main()
{
    uint64_t num;

    std::cout << "Enter any positive integer: ";
    std::cin >> num;

    if (is_prime(num)) {
        std::cout << num << " is a prime number.\n";
    }
    else {
        std::cout << num << " is not a prime number.\n";
    }

    return 0;
}
