#include <stdio.h>

int main(void)
{
	unsigned long int dist;

	printf("Enter distance(km): ");
	scanf("%lu", &dist);

	printf("Time: %ld\n", dist/300000);

	return 0;
}