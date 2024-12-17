#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char name[50];
    double id;

    fprintf(stdout,"당신의 영문이름을 입력하세요: ");
    fscanf(stdin,"%s",name);
    fprintf(stdout,"당신의 학번을 입력하세요: ");
    fscanf(stdin,"%lf",&id);

    fprintf(stdout,"이름: %s, 학번: %.lf\n",name,id);
    
    return 0;
}