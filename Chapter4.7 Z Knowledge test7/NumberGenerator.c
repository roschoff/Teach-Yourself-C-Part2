#include <stdio.h>

int random;
int series(int num);
int num = 21;

int main(void)
{	
	int i;
	
	for (i = 1; i < 11; i++) {
		series(num);
		num = random;
	}
	return 0;
}
int series(int num) {
		
	random = (num * 1468) % 467;
	printf("%d ", random);
}