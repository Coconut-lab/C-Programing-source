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

	printf("��� LIKE : %d, a�� �ּ� : %d, b�� �ּ� : %d\n",LIKE,&a,&b);
	printf("LIKE * dis : %d\n", LIKE * dis);


	return 0;
}