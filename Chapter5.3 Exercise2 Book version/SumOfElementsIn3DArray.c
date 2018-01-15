#include <stdio.h>

int main(void)
{
	int arr3D[3][3][3];
	int i, j, k, sum;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 3; k++) {
				arr3D[i][j][k] = (i+1) * (j+1) * (k+1);
				printf("%d ", arr3D[i][j][k]);
			}
		}
	}
	sum = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 3; k++) {
				sum = sum + arr3D[i][j][k];
			}
		}
	}
	printf("%d ", sum);
	
	return 0;

}