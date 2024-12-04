#include <stdio.h>

#define SIZE 4

// 배열에 특정 원소가 있는지 확인하는 함수
int contains(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr1[SIZE];
    int arr2[SIZE];
    int intersection[SIZE];
    int union_set[SIZE * 2];
    int intersection_size = 0;
    int union_size = 0;

    // 첫 번째 배열 입력 받기
    printf("배열 1의 숫자 4개를 입력해주세요: ");
    scanf("%d %d %d %d", &arr1[0], &arr1[1], &arr1[2], &arr1[3]);

    // 두 번째 배열 입력 받기
    printf("배열 2의 숫자 4개를 입력해주세요: ");
    scanf("%d %d %d %d", &arr2[0], &arr2[1], &arr2[2], &arr2[3]);

    // 교집합 구하기
    for (int i = 0; i < SIZE; i++) {
        if (contains(arr2, SIZE, arr1[i])) {
            intersection[intersection_size++] = arr1[i];
        }
    }

    // 합집합 구하기
    // 첫 번째 배열의 모든 원소를 합집합에 추가
    for (int i = 0; i < SIZE; i++) {
        union_set[union_size++] = arr1[i];
    }

    // 두 번째 배열에서 중복되지 않는 원소만 합집합에 추가
    for (int i = 0; i < SIZE; i++) {
        if (!contains(arr1, SIZE, arr2[i])) {
            union_set[union_size++] = arr2[i];
        }
    }

    // 결과 출력
    printf("배열 1과 2의 교집합\n[ ");
    if (intersection_size == 0) {
        printf("]");
    } else {
        for (int i = 0; i < intersection_size; i++) {
            printf("%d", intersection[i]);
            if (i < intersection_size - 1) {
                printf(" ");
            }
        }
        printf(" ]");
    }

    printf("\n배열 1과 2의 합집합\n[ ");
    for (int i = 0; i < union_size; i++) {
        printf("%d", union_set[i]);
        if (i < union_size - 1) {
            printf(" ");
        }
    }
    printf(" ]\n");

    return 0;
}