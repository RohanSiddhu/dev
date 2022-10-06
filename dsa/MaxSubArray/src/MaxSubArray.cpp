#include "MaxSubArray.hpp"


/**
 * @brief Find the maximum sub-array which is crossing the left and right arrays.
 * 
 * @param arr Input array.
 * @param low Lower bound.
 * @param mid Middle index to the array.
 * @param high Upper bound.
 * 
 * @return MaxArray
 */
MaxArray max_crossing_subarray(int arr[], int low, int mid, int high) {
    long long leftSum = arr[mid], sum = 0;
    int leftBound = mid;

    for (int i = mid; i >= low; i--) {
        sum += arr[i];
        if (sum > leftSum) {
            leftSum = sum;
            leftBound = i;
        }
    }

    long long rightSum = arr[mid + 1];
    int rightBound = mid + 1;
    sum = 0;

    for (int i = mid + 1; i <= high; i++) {
        sum += arr[i];
        if (sum > rightSum) {
            rightSum = sum;
            rightBound = i;
        }
    }

    return MaxArray {leftBound, rightBound, leftSum + rightSum};
}


MaxArray max_subarray_divide_and_conquer(int arr[], int low, int high) {
    if (low == high) {
        return MaxArray {low, high, arr[low]};
    }
    else {
        int mid = (low + high) / 2;
        MaxArray leftMax = max_subarray_divide_and_conquer(arr, low, mid);
        MaxArray rightMax = max_subarray_divide_and_conquer(arr, mid + 1, high);
        MaxArray crossMax = max_crossing_subarray(arr, low, mid, high);

        if (leftMax.sum > rightMax.sum && leftMax.sum > crossMax.sum) {
            return leftMax;
        }
        else if (rightMax.sum > leftMax.sum && rightMax.sum > crossMax.sum) {
            return rightMax;
        }
        else {
            return crossMax;
        }
    }

    return MaxArray {0};
}


MaxArray max_subarray_brute_force(int arr[], int low, int high) {
    long long maxSum = arr[0], sum;
    int lowerBound = 0, upperBound = 0;

    for (int i = 0; i <= high; i++) {
        sum = arr[i];
        for (int j = i + 1; j <= high; j++) {
            sum += arr[j];
            if (sum > maxSum) {
                maxSum = sum;
                lowerBound = i;
                upperBound = j;
            }
        }
    }

    return MaxArray{ lowerBound, upperBound, maxSum };
}
