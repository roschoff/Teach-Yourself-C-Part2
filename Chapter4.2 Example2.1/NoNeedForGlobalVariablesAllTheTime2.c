#include <stdio.h>

int power(int m, int e);

int main(void)
{
	int m, e;
	m = 2;
	e = 3;

	printf("%d to the %d is %d\n", m, e, power(m, e));
	printf("4 to the 5th power is %d\n", power(4, 5));
	printf("3 to the 3rd power %d\n", power(3, 3));

	return 0;
}
int power(int m, int e) {
	int temp;

	temp = 1;
	for (; e > 0; e--) {
		temp = temp * m;
	}
	return temp;
}