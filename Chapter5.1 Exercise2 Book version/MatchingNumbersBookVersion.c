#include <stdio.h>

int main(void)
{
	int i[10], j, k, match;
	
	printf("Enter 10 integers: \n");
	for (j = 0; j < 10; j++) {
		scanf("%d", &i[j]);
	}
	for (j = 0; j < 10; j++) {
		match = i[j];
		for (k = j + 1; k < 10; k++) {
			if (match == i[k])
				printf("%d is duplicated\n", match);
		}
	}

	return 0;
}