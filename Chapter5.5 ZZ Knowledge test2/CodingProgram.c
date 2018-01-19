#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20], encode[20];
	int i;

	printf("Enter string to encode: ");
	gets(str);

	for (i = 0; i < strlen(str) / 2; i++) {
		printf("%c%c", str[i], str[strlen(str)-1-i]);
	}
	
	printf("\n");

	return 0;
}