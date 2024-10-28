#include <stdio.h>

int main()
{
	int kor, eng, mat;

	printf("국어, 영어, 수학 점수 입력 : ");
	scanf("%d %d %d", &kor, &eng, &mat);

	printf("평균 : %d\n", (kor + eng + mat) / 3);

	return 0;
}