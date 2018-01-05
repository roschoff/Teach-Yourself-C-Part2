#include <stdio.h>

int main(void)
{
	double i = 1.0;

	for (; (int)i < 10; ) {
		printf("%f ", i);
		i = i + 0.1;
	}
	return 0;
}
