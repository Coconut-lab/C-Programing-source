#include <stdio.h>

int main()
{
	char str[100] = { "strawberry" };
	char *cp = str;

	printf("%s\n", str + 5);
}