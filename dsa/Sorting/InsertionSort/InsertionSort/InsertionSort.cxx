/**
 * InsertionSort.cpp : Defines the entry point for the application.
 */

#include "InsertionSort.h"


long ARR_SIZE = 200000l;


int main() {
	std::cout << "Enter size of array: ";
	std::cin >> ARR_SIZE;
	int32_t* arr = new int32_t[ARR_SIZE];

	for (long i = 0; i < ARR_SIZE; i++) {
		arr[i] = ARR_SIZE - i;
	}

	{
		Time t;
		for (long i = 1; i < ARR_SIZE; i++) {
			long key = arr[i];
			long j = i - 1;

			while (j >= 0 && arr[j] > key) {
				arr[j + 1] = arr[j];
				j--;
			}
			arr[j + 1] = key;
		}
	}

	delete[] arr;
	return 0;
}
