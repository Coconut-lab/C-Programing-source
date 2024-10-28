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

	printf("惑荐 LIKE : %d, a狼 林家 : %d, b狼 林家 : %d\n",LIKE,&a,&b);
	printf("LIKE * dis : %d\n", LIKE * dis);


	return 0;
}