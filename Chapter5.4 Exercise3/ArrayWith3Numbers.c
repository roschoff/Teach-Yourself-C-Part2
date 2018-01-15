#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
	int numArr[][3] = {
		1, 1, 1,
		2, 4, 8,
		3, 9, 27,
		4, 16, 64,
		5, 25, 125,
		6, 36, 216,
		7, 49, 343,
		8, 64, 512,
		9, 81, 729,
		10, 100, 1000
	};
	int i, k, choice;

	printf("Enter cube: ");
	scanf("%d", &choice);

	for (i = 0; i < 10; i++) {
		if (choice == numArr[i][2]) {
			printf("Root: %d, square: %d\n", numArr[i][0], numArr[i][1]);
		}
	}
	if (i == 10) printf("Cube not found! ");
	
	return 0;
}