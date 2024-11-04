#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 레코드 쓰기 함수
void writeRecord(FILE *fp) {
    char name[20];
    int age;
    char phone[15];

    printf("\n이름 입력: ");
    scanf("%s", name);
    printf("나이 입력: ");
    scanf("%d", &age);
    printf("전화번호 입력: ");
    scanf("%s", phone);

    // 파일에 각 데이터를 순서대로 쓰기
    fwrite(name, sizeof(char), 20, fp);
    fwrite(&age, sizeof(int), 1, fp);
    fwrite(phone, sizeof(char), 15, fp);
}

// 레코드 읽기 함수
void readRecord(FILE *fp) {
    char name[20];
    int age;
    char phone[15];

    // 파일에서 각 데이터를 순서대로 읽기
    if (fread(name, sizeof(char), 20, fp) > 0) {
        fread(&age, sizeof(int), 1, fp);
        fread(phone, sizeof(char), 15, fp);

        printf("\n이름: %s\n", name);
        printf("나이: %d\n", age);
        printf("전화번호: %s\n", phone);
    }
}

int main() {
    FILE *fp;
    int choice;

    // 파일 열기
    fp = fopen("records.dat", "rb+");
    if (fp == NULL) {
        fp = fopen("records.dat", "wb+");
        if (fp == NULL) {
            printf("파일을 열 수 없습니다.\n");
            return 1;
        }
    }

    while (1) {
        printf("\n1. 정보 입력\n");
        printf("2. 정보 읽기\n");
        printf("3. 종료\n");
        printf("선택: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                fseek(fp, 0, SEEK_END);  // 파일 끝으로 이동
            writeRecord(fp);
            break;

            case 2:
                rewind(fp);  // 파일 처음으로 이동
            while (!feof(fp)) {
                readRecord(fp);
            }
            break;

            case 3:
                fclose(fp);
            return 0;

            default:
                printf("잘못된 선택입니다.\n");
        }
    }
}