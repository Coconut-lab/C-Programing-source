#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 부서 정보를 담는 구조체 정의
struct Department {
    // 여기에 필요한 부서 관련 데이터 필드들이 들어갈 수 있습니다
    // 예: char* name, int departmentId 등
    struct Department* next;  // 다음 부서를 가리키는 포인터
};

// 메모리 해제 함수 선언
void freeList(struct Department* head);

int main(void) {
    // 여기서 연결 리스트 생성 및 사용
    struct Department* head = NULL;  // 리스트의 시작점

    // ... 리스트 조작 코드 ...

    // 프로그램 종료 전 반드시 메모리 해제
    freeList(head);

    return 0;
}

// 재귀적으로 리스트의 모든 노드를 해제하는 함수
void freeList(struct Department* head) {
    if (head == NULL) {  // 기저 조건: 빈 리스트이거나 리스트의 끝에 도달
        return;
    }

    // 재귀적으로 나머지 리스트를 먼저 해제
    freeList(head->next);

    // 현재 노드의 메모리 해제
    free(head);
}