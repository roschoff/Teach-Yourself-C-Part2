#include <stdio.h>

int main(void)
{
	char dict[][2][20] = {
		"car", "kola",
		"door", "vrata",
		"star", "zvezda",
		"engine", "dvigatel",
		"pistol", "pistolet",
		"tree", "dyrvo",
		"", ""
	};

	int i = 0;
	char input[20];

	printf("Enter an English word to translate: ");
	gets(input);

	while (strcmp(dict[i][0], "")) {
		if (!strcmp(dict[i][0], input)) {
			printf("Translation of word %s: %s\n", input, dict[i][1]);
			break;
		}
		i++;
	}

	if (!strcmp(dict[i][0], "")) {
		printf("Not in the dictionary! ");
	}
	/*for (i = 0; strcmp(dict[i][0]); i++) {
		if (!strcmp(dict[i][0], input)) {
			printf("Translation of %s: %s\n", input, dict[i][1]);
			i--;
		}
		printf("Enter an English word to translate: ");
		gets(input);
	}*/


	return 0;
}