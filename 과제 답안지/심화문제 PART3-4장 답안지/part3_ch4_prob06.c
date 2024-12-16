#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct department
{
	char name[50];
	int student;
	struct department *next;
}depart;

void freeList(depart *headDepart);

int main()
{
	FILE *fp;
	depart *headDepart=NULL, *lastDepart=NULL;  // ó�� ����ü�� ������ ����ü�� ����Ű�� ������
	depart *tempDepart;							// �ӽ� ���� ����
	
	fp = fopen("department.txt", "r"); // departmeent.txt�� �б� �������� ����

	// ������ ���� ���� ������ ���
	while (!feof(fp))
	{
		tempDepart = (depart*)calloc(1, sizeof(depart));
		fscanf(fp, "%s %d", tempDepart->name, &(tempDepart->student));		//������ �о� �����Ҵ��� ����ü�� �ɹ��� ������

		if (headDepart == NULL)			// ���� �����Ҵ��� ����ü�� ù��°���
		{
			headDepart = tempDepart;	// ó�� ����ü�� ������ ����ü�� ���� ó�� ����ü�� ����Ŵ
			lastDepart = tempDepart;
		}
		else
		{									// �����Ҵ��� ����ü�� ó���� �ƴ϶��
			lastDepart->next = tempDepart;	// 1. ������ ����ü�� next������ �����Ҵ��� ����ü�� �ּҸ� ����
			lastDepart = tempDepart;		// 2. ������ ����ü�� �����Ҵ��� ����ü�� ����
		}
	}

	// ������� ���
	tempDepart = headDepart;				// tempDepart ������ ó�� ����ü�� �ּҸ� ����

	while (tempDepart != NULL)				// tempDepart�� NULL �϶����� �ݺ�
	{
		printf("%-20s/ %d\n", tempDepart->name, tempDepart->student);	// tempDepart ��� ���
		tempDepart = tempDepart->next;		// tempDepart�� ���� ����ü�� �ּҸ� ����
	}

	// �����Ҵ� ����
	freeList(headDepart);

	return 0;
}

void freeList(depart *headDepart)		// ���ȣ���� ����� free �Լ�
{
	if (headDepart == NULL)				// ���� �����Ͱ� NULL�̸�(����Ʈ�� ���� �Ѿ��) ������
		return;
	else								// �ƴϸ�
	{
		freeList(headDepart->next);		// ���� ��Ҹ� ���ȣ���ϰ�
		free(headDepart);				// �ش� ����ü�� free��
	}
}