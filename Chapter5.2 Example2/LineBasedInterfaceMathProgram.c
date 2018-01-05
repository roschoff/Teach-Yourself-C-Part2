#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char command[80], temp[80];
	int i, j;

	for ( ; ; ) {
		printf("Operation? ");
		gets(command);
		
		/*proverka dali potrebitelqt iska da spre*/
		if (!strcmp(command, "quit")) break;

		printf("Enter first number: ");
		gets(temp);
		i = atoi(temp);

		printf("Enter second number: ");
		gets(temp);
		j = atoi(temp);

		/*sega se izvyrshva operaciqta*/
		if (!strcmp(command, "add")) printf("%d\n", i + j);
		else if (!strcmp(command, "subtract")) printf("%d\n", i - j);
		else if (!strcmp(command, "multiply")) printf("%d\n", i*j);
		else if (!strcmp(command, "divide")) printf("%d\n", i / j);
	}
	return 0;
}