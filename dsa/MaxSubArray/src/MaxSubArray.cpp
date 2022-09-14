#include "MaxSubArray.hpp"


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

MaxArray max_subarray(int arr[], int low, int high) {
    if (low == high) {
        return MaxArray {low, high, arr[low]};
    }
    else {
        int mid = (low + high) / 2;
        MaxArray leftMax = max_subarray(arr, low, mid);
        MaxArray rightMax = max_subarray(arr, mid + 1, high);
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