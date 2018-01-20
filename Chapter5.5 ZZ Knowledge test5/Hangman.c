#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(void)
{
	int guess = 0, j;
	char ch, winWord[] = "concatenation", blank[]="_____________";

	printf("Hangman v1.0\n");
	printf("_ _ _ _ _ _ _ _ _ _ _ _ _");
	printf("\n");
	printf("Enter a letter(15 tries): ");

	do {	
		ch = getche();
		printf("\n");
		
		for (j = 0; j < 13; j++) {
			if (ch == winWord[j]) {
				blank[j] = ch;
				printf("%s\n", blank);
			}
		}
		guess++;

	} while (strcmp(blank, winWord) && guess < 15);

	if (strcmp(blank, winWord)) {
		printf("The word was %s ", winWord);
	}

	return 0;
}