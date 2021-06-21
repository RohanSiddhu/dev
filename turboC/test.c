#include <stdio.h>

int main(void) {
	int arr[5] = {0};

	printf("Enter array elements: ");
	for(short i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	for(short i = 0; i < 5; i++) {
		printf("%2d", arr[i]);
	}

	return 0;
}