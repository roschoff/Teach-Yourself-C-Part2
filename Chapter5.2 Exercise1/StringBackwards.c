#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];
	int i;

	printf("Enter a string: ");
	gets(str);
	for (i = strlen(str)-1; i >= 0; i--) {
		printf("%c", str[i]);
	}
	printf("\n");
	
	return 0;
}