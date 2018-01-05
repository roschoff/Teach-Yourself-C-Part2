#include <stdio.h>

int main(void)
{
	int a[10], a2[10];
	int i;

	for (i = 1; i < 11; i++) {
		a[i - 1] = i;
	}
	for (i = 0; i < 10; i++) {
		a2[i] = a[i];
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", a2[i]);
	}
}