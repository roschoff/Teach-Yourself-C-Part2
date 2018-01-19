#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];
	int i, j;

	printf("Enter message: ");
	gets(str);

	/*Encoding*/
	i = 0;
	j = strlen(str) - 1;
	while (i <= j) {
		if (i < j) {
			printf("%c%c", str[i], str[j]);
		}
		else {
			printf("%c", str[i]);
		}
		i++;
		j--;
	}
	printf("\n");
	
	return 0;
}