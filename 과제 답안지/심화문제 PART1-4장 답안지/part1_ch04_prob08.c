#include <stdio.h>

int main(void)
{
	const int LIKE = 1;

	int a, b;
	int addA, addB;
	int dis;
	
	addA = &a;
	addB = &b;
	dis = addA - addB;

	printf("상수 LIKE : %d, a의 주소 : %d, b의 주소 : %d\n",LIKE,&a,&b);
	printf("LIKE * dis : %d\n", LIKE * dis);


	return 0;
}