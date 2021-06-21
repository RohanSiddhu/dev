#include <stdio.h>

int main() {
	int val = 0, feet = 0, inches = 0;

	printf("Enter inches: ");
	scanf("%d", &val);

	feet = val / 12;
	inches = val - (feet * 12);

	printf("\n%d Inches = %d Feets %d Inches.", val, feet, inches);

	return 0;
}