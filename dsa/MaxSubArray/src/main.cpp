#include "MaxSubArray.hpp"
#include "Time.hpp"
#include <iostream>


int main() {
    int arr[] {13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
    MaxArray maxArr {0};

    {
        Time time;
        maxArr = max_subarray_divide_and_conquer(arr, 0, sizeof(arr) / sizeof(int) - 1);
        // maxArr = max_subarray_brute_force(arr, 0, sizeof(arr) / sizeof(int) - 1);
    }

    return EXIT_SUCCESS;
}