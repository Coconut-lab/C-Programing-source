#include <stdio.h>

int main()
{
	int student;

	printf("학번을 입력하세요 : ");
	scanf("%d", &student);

	printf("당신의 학번은 %d입니다.\n변수의 주소 : %X\n", student, &student);

	return 0;
}