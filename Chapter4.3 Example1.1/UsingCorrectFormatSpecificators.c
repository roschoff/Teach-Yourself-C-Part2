#include <stdio.h>

int main(void)
{
	printf("%hd ", 42340); /*ne raboti pravilno; za pravilno izpylnenie trqbva da se izpolzva "%hu"*/	
	
	return 0;
}