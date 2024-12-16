#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char animal[255];
	int num,i;
	FILE *input;
	input = fopen("animal.txt", "r");


	while (!feof(input))
	{
		fscanf(input,"%d %s", &num, animal);
		for (i = 0; i < num; i++)
		{
			printf("%s ", animal);
		}
		printf("\n");
	}

	return 0;
}