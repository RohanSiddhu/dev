#include "MaxSubArray.hpp"
#include "Time.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>


constexpr size_t SIZE = (size_t)5000;
constexpr size_t STEP = (size_t)5;


int main() {
    // int arr[] {13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
    int* arr = new int[SIZE];
    MaxArray maxArr {0};

    srand(time(0));

    for (size_t i = 0; i < SIZE; i++) {
        if (rand() % 2) {
            arr[i] = rand() % 100000;
        }
        else {
            arr[i] = -(rand() % 100000);
        }
    }

    std::cout << "input_size" << ",divide_and_conquer" << ",brute_force" << std::endl;

    for (size_t i = STEP; i <= SIZE; i+= STEP) {
        timespec duration;

        Time timeA;
        timeA.start();
        maxArr = max_subarray_divide_and_conquer(arr, 0, i - 1);
        timeA.end();

        duration = timeA.getTime();
        std::cout << i << "," << duration.tv_sec << "." << std::setw(9) << std::setfill('0') << duration.tv_nsec;

        Time timeB;
        timeB.start();
        maxArr = max_subarray_brute_force(arr, 0, i - 1);
        timeB.end();

        duration = timeB.getTime();
        std::cout << "," << duration.tv_sec << "." << std::setw(9) << std::setfill('0') << duration.tv_nsec << std::endl;
    }


    return EXIT_SUCCESS;
}
