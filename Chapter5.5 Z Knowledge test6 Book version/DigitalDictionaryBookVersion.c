#include <stdio.h>
#include <string.h>

int main(void)
{
	char dict[][2][40] = {
		"house", "a place of dwelling",
		"car", "a vehicle",
		"computer", "a thinking machine",
		"program", "a sequence of instructions",
		""
	};
	char word[80];
	int i;

	printf("Enter a word: ");
	gets(word);

	/*Searching for the word*/	
	i = 0;
	/*Searching until a null terminated string is met*/
	while (strcmp(dict[i][0], "")) {
		if (!strcmp(dict[i][0], word)) {
			printf("meaning: %s\n", dict[i][1]);
			break;
		}
		i++;
	}
	if (!strcmp(dict[i][0], "")) {
		printf("Not in the dictionary! ");
	}
	return 0;
}