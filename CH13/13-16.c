#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char c=3;
    double d=3.1;
    void* vx=NULL;

    vx=&c;
    printf("vx가 저장한 주소 : %x \n", vx);
    printf("*vx의 값 : %d \n", *(char*)vx); // 강제 형변환(char*)

    vx=&d;
    printf("vx가 저장한 주소 : %x \n", vx);
    printf("*vx의 값 : %lf \n", *(double*)vx); // 강제 형변환(double*)

    vx=&c;
    *(char*)vx=5;   // 강제 형변환(char*)
    printf("c가 저장한 값 : %d \n", c);
    printf("*vx의 값 : %d \n", *(char*)vx); // 강제 형변환(char*)

    vx=&d;
    *(double*)vx=5.1; // 강제 형변환(double*)
    printf("d가 저장한 값 : %lf \n", d);
    printf("*vx의 값 : %lf \n", *(double*)vx); // 강제 형변환(double*)

    return 0;
}