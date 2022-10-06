#pragma once


struct MaxArray {
    int low;
    int high;
    long long sum;
};

MaxArray max_crossing_subarray(int arr[], int low, int mid, int high);
MaxArray max_subarray_divide_and_conquer(int arr[], int low, int high);
MaxArray max_subarray_brute_force(int arr[], int low, int high);
