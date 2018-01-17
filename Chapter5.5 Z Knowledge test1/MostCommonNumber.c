#include <stdio.h>

int main(void)
{
	int list[20];
	int i, j, match, num, common, mostCommon = 0;

	printf("Enter 10 numbers: ");

	for (i = 0; i < 20; i++) {
		scanf("%d", &list[i]);
	}

	for (i = 0; i < 20; i++) {
		printf("Checking matches for number: %d ", list[i]);
		match = list[i];
		common = 0;

		for (j = i + 1; j < 20; j++) {
			if (match == list[j]) {
				common++;
				printf("Matches: %d ", common);
				
				if (common >= mostCommon) {
					mostCommon = common;
					num = match;
				}
			}	
		}
		printf("\n");
	}
	printf("Most common number in the sequence: %d ", num);

	return 0;
}