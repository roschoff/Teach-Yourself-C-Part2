#include <stdio.h>

int main(void)
{
	int stats[20], i, j;
	int mode, count, oldcount, oldmode;

	printf("Enter 20 numbers: \n");
	for (i = 0; i < 20; i++) {
		scanf("%d", &stats[i]);
	}
	oldcount = 0;
	/*finding the mode*/	
	for (i = 0; i < 20; i++) {
		mode = stats[i];
		count = 1;
		/*counting the appearances of the given value*/
		for (j = i + 1; j < 20; j++) {
			if (mode == stats[j]) {
				count++;
			}
		}
		if (count > oldcount) {
			oldmode = mode;
			oldcount = count;
		}
	}
	printf("The mode is %d\n", oldmode);
	
	return 0;
}