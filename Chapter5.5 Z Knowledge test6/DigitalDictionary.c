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

	again:
	printf("Enter an English word to translate: ");
	gets(input);
	for (i; strcmp(dict[i][0]); i++) {
		if (!strcmp(dict[i][0], input)) {
			printf("Translation of %s: %s\n", input, dict[i][1]);
			i = 0;
			goto again;
		}
		else if (!strcmp(dict[i][0], "")) {
			printf("Not in the dictionary! ");
			i = 0;
			goto again;
		}
		else if (!strcmp(input, "quit")) {
			break;
		}
	}


	return 0;
}