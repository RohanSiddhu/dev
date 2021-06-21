/** This a "Chef And Card Game" progblem from code chef.
  * Problem Name: CRDGAME
  * Coded By: Rohan Siddhu
  * Date: 14/07/2020
  */

// Includes.
#include <iostream>

// Macros.
#define SIZE 100

// Fucntion's prototype.
unsigned short DigiSum(unsigned long long num);

// 'main' func.
int main(int argc, const char* const argv[]) {
	// Variable declaration.
	unsigned short T, N, powerA = 0, powerB = 0, scoreA = 0, scoreB = 0;
	unsigned long long A[SIZE], B[SIZE];

	std::cin >> T;

	while(T--) {
		scoreA = scoreB = 0;
		std::cin >> N;

		for(short i = 0; i < N; i++) {
			std::cin >> A[i] >> B[i];

			powerA = DigiSum(A[i]); powerB = DigiSum(B[i]);

			if(powerA > powerB)
				scoreA++;
			else if(powerB > powerA)
				scoreB++;
			else {
				scoreA++; scoreB++;
			}
		}

		if(scoreA > scoreB)
			std::cout << 0 << " " << scoreA << std::endl;
		else if(scoreB > scoreA)
			std::cout << 1 << " " << scoreB << std::endl;
		else
			std::cout << 2 << " " << scoreA << std::endl;
	}

	return 0;
}

unsigned short DigiSum(unsigned long long num) {
	unsigned short sum = 0;

	while(num) {
		sum += num % 10;
		num /= 10;
	}

	return sum;
}