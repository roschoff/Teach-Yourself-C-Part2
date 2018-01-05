#include <stdio.h>

int main(void)
{
	char str[80];

	printf("Enter a string(less than 80 characters): ");
	gets(str);
	printf("%s\n", str);

	return 0;
}