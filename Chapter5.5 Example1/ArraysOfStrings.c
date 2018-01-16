#include <stdio.h>

int main(void)
{
	char text[10][80];
	int i;

	for (i = 0; i < 10; i++) {
		printf("%d ", i + 1);
		gets(text[i]);
	}
	do {
		printf("Enter a number of string (1-10): ");
		scanf("%d", &i);
		i--; /*change of value, so it can match with the array's index*/

		if (i >= 0 && i < 10) printf("%s\n", text[i]);
	} while (i >= 0);

	return 0;
}