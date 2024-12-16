#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char str[255];
	int i=0;
	
	printf("문자열 입력 : ");
	gets(str);

	while (str[i] != '\0')
	{
		if (islower(str[i]))
		{
			str[i] -= 32;
		}
		else if (isupper(str[i]))
		{
			str[i] += 32;
		}
		i++;
	}
	printf("변환된 문자열 : ");
	puts(str);
}