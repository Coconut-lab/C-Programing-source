#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int sum(int*, int*); // 함수의 선언, 함수의 리스트
void fileopen(char*, char*);

FILE* file1 = NULL;

int main(void) {
	int answer, a1, a2; //변수의 리스트

	//a1, a2: 와부 입력
	printf("수 2개 입력: ");
	scanf("%d %d", &a1, &a2);

	fileopen(&"csb09_log.txt", &"a+");
	answer = sum(&a1, &a2);

	fprintf(stdout, "%d\n", answer);
	fprintf(file1, "%d\n", answer);

	fclose(file1);
	// system("notepad.exe csb09_log.txt");	// 윈도우에서 실행
	system("open chj09_log.txt");	// 맥에서 실행

	return 0;
}

int sum(int* x, int* y) {	// 함수의 정의, 함수의 알고리즘
	int result = *x + *y;
	return result;
}

void fileopen(char* n, char* t) {	// fileopen 랩핑
	file1 = fopen(n, t);
}