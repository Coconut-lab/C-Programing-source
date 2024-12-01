// Visual Studio 에서만 작동하는 코드입니다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct point {
    int x;
    int y;
};

struct point* copy_paste(struct point);   // 함수의 리스트

int main(void) {
    struct point p1={10, 20};
    struct point* result;

    printf("복사전: %d %d \n", p1.x, p1.y);

    result=copy_paste(p1);

    // 구조체 변수 p2에 p1을 복사
    printf("포인터: %d %d \n", result->x, result->y);

    return 0;

}

struct point* copy_paste(struct point p2) {
    static struct point static_point;  // static 변수로 선언
    static_point.x = p2.x;
    static_point.y = p2.y;

    printf("복사후: %d %d \n",p2.x, p2.y);

    return &static_point;
}