#include <stdio.h>

int spilt(int, int);

int main(void)
{
	int init, month=12;
	printf("초기 미생물의 개체 수를 입력하세요 : ");
	scanf("%d",&init);

	

	printf("최초 : %d 마리, 최종 : %d 마리\n", init,spilt(init, month));

	return 0;
}

int spilt(int init, int month)
{
	if (month < 1)
		return init/2;
	else
	{
		month--;
		spilt(init * 2, month);
	}
}