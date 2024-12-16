#include <stdio.h>
#include <string.h>

int main(void)
{
	char array1[] = "C Language";
	char array2[] = "It is difficult";
	char array3[30] = { NULL };

	printf("array1: %s\n", array1);
	printf("array2: %s\n", array2);

	printf("array1, array2 °áÇÕ: ");

	strcat(array3, array1);
	strncat(array3, array2 + 2, strlen(array2 + 2) + 1);

	puts(array3);

	return 0;
}