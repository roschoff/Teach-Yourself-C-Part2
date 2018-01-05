#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char str[20], bigstr[1000]="";
	int i;

	do {
		printf("Enter string: ");
		gets(str);
		
		if (!strcmp(str, "quit")) break;
		/*if (strlen(bigstr) + strlen(str) > 1000) break;*/
		strcat(bigstr, str);
		printf("%s \n", bigstr);
	
	} while (strcmp(str, "quit") || strlen(bigstr)+strlen(str) < 1000);

	return 0;   ugtu
}