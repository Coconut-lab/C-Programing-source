#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* stream;
	char buffer[100];
	
	stream = fopen("warning.txt", "r+");
	while (!feof(stream))
	{
		fgets(buffer, sizeof(buffer), stream);
		fputs(buffer, stdout);
	}
	fclose(stream);
	puts("");

	return 0;
}
