#include <stdio.h>

struct pos
{
	int x;
	int y;
};

struct pos input(struct pos*);

int main(void)
{
	struct pos var1 = { 0, 0 };
	struct pos* p = NULL;
	
	p = &var1;

	var1 = input(p);

	printf("���: x = %d, y = %d\n", var1.x, var1.y);

	return 0;
}

struct pos input(struct pos* pp)
{
	printf("x�� ���� �Է��ϼ���: ");
	scanf("%d", &(pp->x));
	printf("y�� ���� �Է��ϼ���: ");
	scanf("%d", &(pp->y));

	return *pp;
}