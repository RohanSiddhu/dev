#include "MaxSubArray.hpp"
#include <iostream>
#include <chrono>


class Time {
public:
    std::chrono::steady_clock::time_point start;
    std::chrono::steady_clock::time_point end;
    std::chrono::duration<double> duration;
public:
    Time() {
        start = std::chrono::high_resolution_clock::now();
    }

    ~Time() {
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;

        std::cout.setf(std::ios::floatfield, std::ios::fixed);
        std::cout << duration.count() << std::endl;
    }
};


int main() {
    int arr[] {13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
    MaxArray maxArr {0};

    {
        Time time;
        maxArr = max_subarray_divide_and_conquer(arr, 0, sizeof(arr) / sizeof(int) - 1);
        //maxArr = max_subarray_brute_force(arr, 0, sizeof(arr) / sizeof(int) - 1);
    }

    return EXIT_SUCCESS;
}