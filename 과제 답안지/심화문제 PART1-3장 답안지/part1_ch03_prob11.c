#include <stdio.h>

int main(void)
{
	int age;	// 나이 입력 변수
	

	printf("나이를 입력하세요 : __\b\b"); // 두자리 입력을 위한 언더바(_) 2개 출력 \b를 사용
	scanf("%d", &age); 					  // 나이 입력받음

	printf("당신의 나이는 %d세 입니다.\n", age);	// 나이 출력

	return 0;
}

/* 해설
	printf()의 서식문자를 활용한 문제이다.
	특수 문자 \b 활용하는 방법이다. 
	\b가 아닌 다른 특수 문자는 어떻게 활용될 수 있을까 생각해 보자.
*/