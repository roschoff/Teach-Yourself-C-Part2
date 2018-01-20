#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[] = "concatenation";
	char temp[] = "-------------";
	char ch;
	int i, count;

	count = 0;

	do {
		printf("%s\n", temp);
		printf("Enter your guess: ");
		ch = getchar();
		printf("\n");

		/*check if a letter matches any in the word*/
		for (i = 0; i < strlen(word); i++) {
			if (ch == word[i]) {
				temp[i] = ch;
				count++;
			}
		} 
	} while (strcmp(temp, word));

	printf("%s\n", temp);
	printf("You guessed the word and used %d guesses ", count);

	return 0;
}