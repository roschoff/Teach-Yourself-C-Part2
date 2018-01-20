#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];
	int spaces, periods, commas;
	int i;

	printf("Enter a string: ");
	gets(str);

	spaces = 0;
	commas = 0;
	periods = 0;

	for (i = 0; i < strlen(str); i++) {
		switch (str[i]) {
			case '.': periods++;
				break;
			case ',': commas++;
				break;
			case ' ': spaces++;
		}
	}
	printf("spaces: %d\n", spaces);
	printf("commas: %d\n", commas);
	printf("periods: %d\n", periods);

	return 0;
}