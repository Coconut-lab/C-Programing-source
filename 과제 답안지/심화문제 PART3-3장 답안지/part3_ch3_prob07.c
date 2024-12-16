#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	char buffer[20];
	int cnt = 0, i = 0;
	FILE *input, *berry, *noneBerry;
	input = fopen("fruitList.txt", "r");
	berry = fopen("berry.txt", "w");
	noneBerry = fopen("noneBerry.txt", "w");

	while (!feof(input))
	{
		fscanf(input, "%s\n", buffer);
		if (strstr(buffer, "berry"))
			fprintf(berry, "%s\n", buffer);
		else
			fprintf(noneBerry, "%s\n", buffer);
	}

	fclose(input);
	fclose(berry);
	fclose(noneBerry);

	return 0;
}