#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float item[100], t;
	int a, b, count;

	printf("How many numbers? ");
	scanf("%d", &count);

	for (a = 0; a < count; a++) {
		scanf("%f", &item[a]);
	}

	for (a = 1; a < count; ++a) {
		for (b = count - 1; b >= a; --b) {
			if (item[b - 1] > item[b]){
				t = item[b - 1];
				item[b - 1] = item[b];
				item[b] = t;
			}
		}
	}
	for (a = 0; a < count; a++)
		printf("%f ", item[a]);

	return 0;
}