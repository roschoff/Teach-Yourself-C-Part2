#include <stdio.h>
#include <string.h>

char words[][2][40] = {
	"dog", "Hund",
	"no", "nein",
	"year", "Jahr",
	"child", "Kind",
	"I", "Ich",
	"drive", "fahren",
	"house", "Haus",
	"to", "nach",
	"", ""
};

int main(void)
{
	char english[80];
	int i;

	printf("Enter English word: ");
	gets(english);

	/*Word search*/
	i = 0;
	/*searching until an empty string is found*/
	while (strcmp(words[i][0], "")) {
		if (!strcmp(english, words[i][0])) {
			printf("German translation: %s ", words[i][1]);
			break;
		}
		i++;
	}
	if (!strcmp(words[i][0], "")) {
		printf("Not in dictionary!\n");
	}
	return 0;
}