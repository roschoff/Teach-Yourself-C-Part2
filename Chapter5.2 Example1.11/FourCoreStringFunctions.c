#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80], str2[80];
	int i;

	printf("Enter the first string: ");
	gets(str);
	printf("Enter the second string: ");
	gets(str2);

	/*proverka za dyljina na nizove*/
	printf("%s is %d characters long\n", str, strlen(str));
	printf("%s is %d characters long\n", str2, strlen(str2));

	/*sravnqvane na nizovete*/	
	i = strcmp(str, str2);
	if (!i) printf("The strings are equal.\n");
	else if (i < 0)  printf("%s is less than %s\n", str, str2);
	else printf("%s is greater than %s\n", str, str2);

	/*konkatenirane na str2 kym str*/
	if (strlen(str) + strlen(str2) < 80) {
		strcat(str, str2);
		printf("%s\n", str, str2);

		return 0;
	}
}