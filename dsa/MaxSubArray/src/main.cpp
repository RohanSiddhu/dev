#include "MaxSubArray.hpp"
#include <iostream>


int main() {
    int arr[] {13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
    MaxArray maxArr {0};

    // maxArr = max_crossing_subarray(arr, 0, 3, 7);
    maxArr = max_subarray(arr, 0, sizeof(arr) / sizeof(int) - 1);

    for (int i = maxArr.low; i <= maxArr.high; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return EXIT_SUCCESS;
}