#include <stdio.h>
#include <float.h>

int main(void)
{
	printf("float 자료형의 최솟값 : %e, 최댓값 %e \n",FLT_MIN, FLT_MAX);
	printf("double 자료형의 최솟값 : %e, 최댓값 %e \n", DBL_MIN, DBL_MAX);

	return 0;
}