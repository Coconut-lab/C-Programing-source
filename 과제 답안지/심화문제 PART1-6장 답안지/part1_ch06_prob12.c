#include <stdio.h>

int main()
{
	char ch,ch2,ch3,ch4,ch5;
	printf("5���� �ҹ��ڸ� �Է��ϼ���  : _____\b\b\b\b\b ");
	scanf("%c,%c,%c,%c,%c", &ch,&ch2<&ch3,&ch4,&ch5);
	printf("�빮�� ��ȯ : %c%c%c%c%c\n", ch-32, ch2 - 32, ch3 - 32, ch4 - 32, ch5 - 32);

	return 0;
}