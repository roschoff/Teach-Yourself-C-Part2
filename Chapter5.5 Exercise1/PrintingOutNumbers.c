#include <stdio.h>
#include <string.h>

int main(void)
{	
	char dict[][2][20] = {
		"0", "zero",
		"1", "one",
		"2", "two",
		"3", "three",
		"4", "four",
		"5", "five",
		"6", "six",
		"7", "seven",
		"8", "eight",
		"9", "nine", 
		""
	};
	int i;
	char choice[10];

	printf("Enter a number: ");
	gets(choice);

	i = 0;

	while (strcmp(dict[i][0], "")) {
		if (!strcmp(choice, dict[i][0])) {
			printf("%s ", dict[i][1]);
			break;
		}
		i++;
	}
	if (!strcmp(dict[i][0], "")) {
		printf("Not in dictionary!\n");
	}
	
	return 0;
}