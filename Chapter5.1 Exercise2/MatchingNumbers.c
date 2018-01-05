#include <stdio.h>

int main(void)
{
	int arr[10];
	int i, count;

	printf("Enter 10 integers: \n");

	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	for (count = 1; count < 11; count++) {
		for (arr[count - 1]; count < 11; arr[count + 1]) {

		}

		if (arr[count - 1] == arr[count]) {
			printf("Matching numbers! ");
		}
	}

	return 0;
} 