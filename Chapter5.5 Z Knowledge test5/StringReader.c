#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[1000];
	int i;

	printf("Enter a string(type quit to exit)\n");
	gets(input);
	while (strcmp(input, "quit")) {
		printf("Enter a string(type quit to exit)\n");
		gets(input);
	}

	return 0;
}