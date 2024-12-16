#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	char str[255];
	FILE *fp;
	fp = fopen("a.txt", "w");

	while (1)
	{
		gets(str);
		if (strcmp(str, "exit") == 0)
			break;
		fprintf(fp, "%s\n", str);
	}
	fclose(fp);
	system("a.txt");
	return 0;
}