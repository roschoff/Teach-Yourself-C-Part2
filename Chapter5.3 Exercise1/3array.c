#include <stdio.h>

int main(void)
{
	int arr3d[3][3][3];
	int a, b, c, num;

	num = 1;

	for (c=0; c < 3; c++) {
		for (b=0; b < 3; b++) {
			for (a=0; a < 3; a++) {
				arr3d[a][b][c] = num++;
				printf("%d, ", arr3d[a][b][c]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}