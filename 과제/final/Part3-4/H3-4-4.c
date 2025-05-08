#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **ary;  // 2차원 배열을 가리키는 이중 포인터
    int num;    // 사용자가 입력할 배열의 크기
    int i, j, temp = 1;  // 반복문 변수와 배열에 채울 값

    // 사용자로부터 배열 크기 입력 받기
    printf("배열의 크기를 입력하세요 : ");
    scanf("%d", &num);

    // 2차원 배열 동적할당
    // 먼저 행 포인터들을 위한 메모리 할당
    ary = (int **)calloc(1, sizeof(int*) * num);

    // 각 행에 대해 열 메모리 할당
    for (i = 0; i < num; i++)
    {
        ary[i] = (int *)calloc(1, sizeof(int) * num);
    }

    printf("\n-배열의 요소-\n");

    // 배열을 순차적인 숫자로 채우고 출력
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            ary[i][j] = temp;
            printf("%2d  ", temp);
            temp++;
        }
        printf("\n");
    }

    printf("\n배열의 대각선 요소:");

    // 배열의 대각선 요소만 출력
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            if (i == j)  // i와 j가 같을 때가 대각선 요소
            {
                printf("%2d  ", ary[i][j]);
            }
        }
    }

    printf("\n\n");

    // 2차원 배열 동적할당 해제
    // 먼저 각 행에 할당된 메모리 해제
    for (i = 0; i < num; i++)
    {
        free(ary[i]);
    }
    // 행 포인터 배열 해제
    free(ary);

    return 0;
}
