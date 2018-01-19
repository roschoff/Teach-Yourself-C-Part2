#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];
	int i;

	printf("Enter a string: ");
	gets(str);

	/*filling up the string if necessary*/
	for (i = strlen(str); i < 79; i++) {
		strcat(str, ".");
	}
	printf(str);
	printf("\n");

	return 0;
}