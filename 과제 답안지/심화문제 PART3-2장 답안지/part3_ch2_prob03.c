#include <stdio.h>
#include <string.h>

int main(void)
{
	char array1[] = "C is a general-purpose, imperative computer programming language, supporting structured programming, lexical variable scope and recursion, while a static type system prevents many unintended operations. By design, C provides constructs that map efficiently to typical machine instructions, and therefore it has found lasting use in applications that had formerly been coded in assembly language, including operating systems, as well as various application software for computers ranging from supercomputers to embedded systems.";
	char array2[20] = { NULL };
	char* p = NULL;
	int size;

	printf("검색 단어 입력: ");
	gets(array2);

	size = strlen(array2);

	p = strstr(array1, array2);

	if (p == NULL)
		puts("입력하신 단어가 존재하지 않습니다.");
	else
	{
		printf("문자열의 시작 위치: %x\n", p);
		printf("이 후 구절: %s\n", p);
	}

	return 0;
}