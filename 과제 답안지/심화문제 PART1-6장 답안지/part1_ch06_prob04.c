#include <stdio.h>

int main()
{
	int kor, eng, math;
	double mean;

	printf("�� �� �� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &kor, &eng, &math);

	mean = (kor + eng + math) / 3.0;

	printf("����� %d �Դϴ�.\n", (int)mean);

	return 0;
}