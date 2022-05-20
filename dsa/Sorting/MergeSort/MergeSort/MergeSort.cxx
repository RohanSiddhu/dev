// MergeSort.cpp : Defines the entry point for the application.
//

#include "MergeSort.h"


long long ARR_SIZE;
long long* temp;


void MergeSort(long long* arr, long long beg, long long end);
void Merge(long long* arr, long long beg, long long mid, long long end);


int main() {
	std::cout << "Enter array size: ";
	std::cin >> ARR_SIZE;
	temp = new long long[ARR_SIZE];
	long long* arr = new long long[ARR_SIZE];
	for (long long i = 0; i < ARR_SIZE; i++) {
		arr[i] = ARR_SIZE - i;
	}

	{
		Time time;
		MergeSort(arr, 0, ARR_SIZE - 1);
	}

	delete[] arr;
	delete[] temp;
	return 0;
}


void MergeSort(long long* arr, long long beg, long long end) {
	long long mid;

	if (beg < end) {
		mid = (beg + end) / 2;
		MergeSort(arr, beg, mid);
		MergeSort(arr, mid + 1, end);
		Merge(arr, beg, mid, end);
	}
}


void Merge(long long* arr, long long beg, long long mid, long long end) {
	long long i = beg, j = mid + 1, index = beg;

	while (i <= mid && j <= end) {
		if (arr[i] < arr[j]) {
			temp[index] = arr[i];
			i++;
		}
		else {
			temp[index] = arr[j];
			j++;
		}
		index++;
	}

	if (i > mid) {
		while (j <= end) {
			temp[index] = arr[j];
			index++; j++;
		}
	}
	else {
		while (i <= mid) {
			temp[index] = arr[i];
			index++; i++;
		}
	}

	for (i = beg; i < index; i++) {
		arr[i] = temp[i];
	}
}
