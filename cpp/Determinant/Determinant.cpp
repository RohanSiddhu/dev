// Determinant.cpp : Defines the entry point for the application.
// Coded By: Rohan Siddhu
// Date: 04/07/2021
// Last Modified: 04/07/2021

#include "Determinant.h"

int main()
{
	double *matrix = NULL;
	int size = 0;

	std::cout << "Size: ";
	std::cin >> size;
	
	if (size < 1) {
		std::cout << "Invalid size!!\n";
		return EXIT_FAILURE;
	}

	// Allocating memory.
	matrix = (double*) calloc(size * size, sizeof(double));

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cin >> *(matrix + i * size + j);
		}
	}

	double determinant = Determinant(matrix, size);

	std::cout << "Determinant: " << determinant << std::endl;

	return 0;
}


/* Determinant function definition. */

double Determinant(double* matrix, int size) {
	double determinant = 0;

	if (size == 1) return *matrix;

	double* temp = (double*)calloc((size - 1) * (size - 1), sizeof(double));

	for (int i = 0; i < size; i++) {
		for (int j = 1, n = 0; j < size; j++) {
			for (int k = 0; k < size; k++) {
				if (k != i) {
					*(temp + n) = *(matrix + j * size + k);
					n++;
				}
			}
		}

		(i % 2) ? (determinant -= *(matrix + i) * Determinant(temp, size - 1)) : (determinant += *(matrix + i) * Determinant(temp, size - 1));
	}

	return determinant;
}

void PrintDet(double* matrix, int size) {
	for (int i = 0; i < (size * size); i++) {
		if (i % size == 0) {
			std::cout << std::endl;
		}
		std::cout << *(matrix + i) << " ";
	}
	std::cout << std::endl;
}
