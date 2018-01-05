#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int item[100];
	int a, b, swap;
	int count;

	printf("How many numbers? ");
	scanf("%d", &count);

	for (a = 0; a < count; a++) {
		scanf("%d", &item[a]);
	}
	/*Bubble sort*/
	for (a = 1; a < count; a++) {
		for (b = count - 1; b >= a; b--) {
			/*Sravnenie na sysedni elementi*/
			if (item[b - 1] > item[b]) {
				/*Razmqna na elementi*/
				swap = item[b - 1];
				item[b - 1] = item[b];
				item[b] = swap;
			}
		}
	}
	for (a = 0; a < count; a++) {
		printf("%d ", item[a]);
	}

	return 0;
}