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
	depart *headDepart=NULL, *lastDepart=NULL;  // 처음 구조체와 마지막 구초체를 가리키는 포인터
	depart *tempDepart;							// 임시 저장 변수
	
	fp = fopen("department.txt", "r"); // departmeent.txt를 읽기 전용으로 열기

	// 파일의 끝을 읽을 때까지 계속
	while (!feof(fp))
	{
		tempDepart = (depart*)calloc(1, sizeof(depart));
		fscanf(fp, "%s %d", tempDepart->name, &(tempDepart->student));		//파일을 읽어 동적할당한 구조체의 맴버에 복사함

		if (headDepart == NULL)			// 만약 동적할당한 구조체가 첫번째라면
		{
			headDepart = tempDepart;	// 처음 구조체와 마지막 구조체가 전부 처음 구조체를 가리킴
			lastDepart = tempDepart;
		}
		else
		{									// 동적할당한 구조체가 처음이 아니라면
			lastDepart->next = tempDepart;	// 1. 마지막 구조체의 next변수에 동적할당한 구조체의 주소를 저장
			lastDepart = tempDepart;		// 2. 마지막 구조체를 동적할당한 구조체로 변경
		}
	}

	// 구성요소 출력
	tempDepart = headDepart;				// tempDepart 변수에 처음 구조체의 주소를 저장

	while (tempDepart != NULL)				// tempDepart가 NULL 일때까지 반복
	{
		printf("%-20s/ %d\n", tempDepart->name, tempDepart->student);	// tempDepart 요소 출력
		tempDepart = tempDepart->next;		// tempDepart에 다음 구조체의 주소를 저장
	}

	// 동적할당 해제
	freeList(headDepart);

	return 0;
}

void freeList(depart *headDepart)		// 재귀호출을 사용한 free 함수
{
	if (headDepart == NULL)				// 만약 포인터가 NULL이면(리스트의 끝을 넘어가면) 리턴함
		return;
	else								// 아니면
	{
		freeList(headDepart->next);		// 다음 요소를 재귀호출하고
		free(headDepart);				// 해당 구조체를 free함
	}
}