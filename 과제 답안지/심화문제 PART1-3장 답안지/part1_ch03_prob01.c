#include <stdio.h>

int main()
{
	int kor, eng, mat;

	printf("����, ����, ���� ���� �Է� : ");
	scanf("%d %d %d", &kor, &eng, &mat);

	printf("��� : %d\n", (kor + eng + mat) / 3);

	return 0;
}