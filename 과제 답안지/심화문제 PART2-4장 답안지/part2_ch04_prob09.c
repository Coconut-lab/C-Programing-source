#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[255] = "";
	char *temp;

	printf("��ȣ���� �Է��ϼ���\n->");
	gets_s(str,sizeof(str));
	strupr(str);
	temp = str;

	printf("\n�ص��� ��ȣ��\n->");
	// �빮�� �ƽ�Ű �ڵ�� 65���� 90����
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