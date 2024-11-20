#include <stdio.h>

void voidPrint(void *);

int main()
{
	void *cp = "Hello World!";
	voidPrint(cp);
	return 0;
}

void voidPrint(void *cp)
{
	printf("%s\n", (char *)cp);
}