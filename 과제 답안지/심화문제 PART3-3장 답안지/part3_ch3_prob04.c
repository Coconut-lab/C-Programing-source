#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	FILE *fp;

	fp = fopen("hello.txt", "w");

	fprintf(fp, "%s", "Hello World!\n");

	fclose(fp);
	return 0;
}
