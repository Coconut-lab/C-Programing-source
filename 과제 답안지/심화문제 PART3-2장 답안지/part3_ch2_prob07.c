#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char menuNum[255];
	int num;

	while (1)
	{
		printf("=========== MENU ===========\n");
		printf("1. �� ���� ����.\n");
		printf("2. �� ���� ����.\n");
		printf("�޴� ��ȣ�� �Է��ϼ��� : ");

		gets(menuNum);		// ����ڿ��� �޴� ��ȣ �Ǵ� 'exit' �� �Է� �޴´�.

		if (strcmp(menuNum, "exit") == 0)	// ���� ����� �Է��� exit���� �˻�
		{
			printf("���α׷��� �����մϴ�...\n");		// exit �Է½� ���α׷� ����.
			break;
		}
		
		num = atoi(menuNum); // ���ڿ��� ���ڷ� ��ȯ��.
		                                                  // �� �Լ��� ���ڿ��� ���ڷ� ��ȯ���� ���� ��� 0�� ������ -> �޴���ȣ�� 0���� ������� �� ��
		                                                  // ���� ����ڰ� a�� �Է��� ��� 0���� ������ ������ �ν��ϱ� ����
		
		switch (num)
		{
		case 1:
			printf("�� ���� ������ �����ϴ� �޴��Դϴ�.\n\n");
			break;
		case 2:
			printf("�� ���� ������ �����ϴ� �޴��Դϴ�.\n\n");
			break;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�.\n\n");
			break;
		}
	}
	return 0;
}