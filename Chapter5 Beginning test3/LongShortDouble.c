#include <stdio.h>

int main(void)
{
	long a;
	short b;
	double c;

	printf("Enter long integer: ");
	scanf("%ld", &a);
	printf("Enter short integer: ");
	scanf("%hd", &b);
	printf("Enter double: ");
	scanf("%lf", &c);

	printf("Long: %ld, short: %hd, double: %lf\n", a, b, c);

	return 0;
}