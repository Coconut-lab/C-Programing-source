#include <stdio.h>

int * findAry(int*, int,int);

int main()
{
	int * ip;
	int num, ary[5] = { 1,2,3,4,5 };
	printf("ã�� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);

#pragma region findAry �Լ� ȣ��
	ip = findAry(ary, sizeof(ary) / sizeof(int), num);
#pragma endregion

	if (ip == NULL)
		printf("���ڰ� �������� �ʽ��ϴ�.\n");
	else
		printf("%d\n",*ip);
}

int * findAry(int *ary, int size, int num)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (ary[i] == num)
			return ary+i;
	}
	return NULL;
}