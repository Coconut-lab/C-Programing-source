#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[255] = "";
	char *temp;

	printf("암호문을 입력하세요\n->");
	gets_s(str,sizeof(str));
	strupr(str);
	temp = str;

	printf("\n해독된 암호문\n->");
	// 대문자 아스키 코드는 65부터 90까지
	while (*temp != '\0')
	{
		if (*temp < 91 && *temp>64)
		{
			*temp -= 3;
			if (*temp < 65)
			{
				*temp += 26;
			}
			putchar(*temp % 91);
		}
		else
		{
			putchar(*temp);
		}
		temp++;
	}
	printf("\n");

	return 0;
}