#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];
	int i, ch, spaces = 0, commas = 0, fullStops = 0;

	printf("Enter the sentence: ");
	gets(str);

	for (i = 0; i < 80; i++) {
		ch = str[i]; /*You can just use str[i], instead of the variable ch*/

		switch (ch) {
			case ' ':
				spaces++;
				break;
			case ',':
				commas++;
				break;
			case '.':
				fullStops++;
				break;
		}
	}
	printf("Number of spaces: %d, commas: %d, full stops: %d\n", spaces, commas, fullStops);

	return 0;
}