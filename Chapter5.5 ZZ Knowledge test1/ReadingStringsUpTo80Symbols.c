#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[80], newInput[80];
	int i;

	do {
		printf("Enter a string: ");
		gets(input);

		char newInput[80] = "";
		if (strlen(input) < 80) {
			i = 80 - strlen(input);
			for (i; i > 0; i--) {
				strcat(newInput, ".");
			}

			strcat(input, newInput);
			printf("%s\n", input);
		}
		

	} while (strcmp(input, "quit"));

	return 0;
}