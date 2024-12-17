#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_LINE 256

struct Book {
    int id;
    char title[100];
    char author[50];
    int status;
};

struct Book library[MAX_BOOKS];
int book_count = 0;

void trim(char *str) {
    int len = strlen(str);
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
    }
}

void parse_line(char *line, int *id, char *title, char *author, int *status) {
    char *p = line;
    char *end;

    // Parse ID
    *id = strtol(p, &end, 10);
    if (*end != ',') return;
    p = end + 1;

    // Parse Title
    end = strchr(p, ',');
    if (end == NULL) return;
    strncpy(title, p, end - p);
    title[end - p] = '\0';
    p = end + 1;

    // Parse Author
    end = strchr(p, ',');
    if (end == NULL) return;
    strncpy(author, p, end - p);
    author[end - p] = '\0';
    p = end + 1;

    // Parse Status
    *status = strtol(p, &end, 10);
}

void load_books() {
    FILE *file = fopen("books.txt", "r");
    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return;
    }

    char line[MAX_LINE];
    while (fgets(line, sizeof(line), file) && book_count < MAX_BOOKS) {
        trim(line);
        parse_line(line, &library[book_count].id, library[book_count].title,
                   library[book_count].author, &library[book_count].status);
        book_count++;
    }

    fclose(file);
}

void save_books() {
    FILE *file = fopen("books.txt", "w");
    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return;
    }

    for (int i = 0; i < book_count; i++) {
        fprintf(file, "%d,%s,%s,%d\n", library[i].id, library[i].title,
                library[i].author, library[i].status);
    }

    fclose(file);
}

void display_books() {
    printf("=== 도서 목록 ===\n");
    for (int i = 0; i < book_count; i++) {
        printf("도서번호: %d\n", library[i].id);
        printf("제목: %s\n", library[i].title);
        printf("저자: %s\n", library[i].author);
        printf("상태: %s\n", library[i].status ? "대출 가능" : "대출 중");
        printf("=============\n");
    }
}

void add_book() {
    if (book_count >= MAX_BOOKS) {
        printf("더 이상 도서를 추가할 수 없습니다.\n");
        return;
    }

    printf("=== 도서 추가 ===\n");
    printf("도서 번호를 입력하세요: ");
    scanf("%d", &library[book_count].id);
    getchar(); // 버퍼 비우기
    printf("책의 제목을 입력하세요: ");
    fgets(library[book_count].title, sizeof(library[book_count].title), stdin);
    trim(library[book_count].title);
    printf("책의 저자를 입력하세요: ");
    fgets(library[book_count].author, sizeof(library[book_count].author), stdin);
    trim(library[book_count].author);
    library[book_count].status = 1;

    book_count++;
    printf("\n추가되었습니다!\n");
    printf("=============\n");
}

void remove_book() {
    int id, found = -1;
    printf("=== 도서 제거 ===\n");
    printf("제거할 도서 번호를 입력하세요: ");
    scanf("%d", &id);

    for (int i = 0; i < book_count; i++) {
        if (library[i].id == id) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        for (int i = found; i < book_count - 1; i++) {
            library[i] = library[i + 1];
        }
        book_count--;
        printf("제거되었습니다.\n");
    } else {
        printf("해당 도서를 찾을 수 없습니다.\n");
    }
    printf("=============\n");
}

void update_book_status() {
    int id, new_status, found = -1;
    printf("=== 도서 상태 업데이트 ===\n");
    printf("상태를 변경할 도서 번호를 입력하세요: ");
    scanf("%d", &id);

    for (int i = 0; i < book_count; i++) {
        if (library[i].id == id) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        printf("현재 상태: %s\n", library[found].status ? "대출 가능" : "대출 중");
        printf("새로운 상태를 입력하세요 (1: 대출 가능, 0: 대출 중): ");
        scanf("%d", &new_status);

        if (new_status == 0 || new_status == 1) {
            library[found].status = new_status;
            printf("도서 상태가 업데이트되었습니다.\n");
        } else {
            printf("잘못된 입력입니다. 상태는 0 또는 1이어야 합니다.\n");
        }
    } else {
        printf("해당 도서를 찾을 수 없습니다.\n");
    }
    printf("=========================\n");
}

int main() {
    int choice;
    load_books();

    while (1) {
        printf("=== 도서 관리 시스템 ===\n");
        printf("1. 도서 목록\n");
        printf("2. 도서 추가\n");
        printf("3. 도서 제거\n");
        printf("4. 도서 상태 업데이트\n");
        printf("5. 프로그램 종료\n");
        printf("=================\n");
        printf("선택: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                display_books();
                break;
            case 2:
                add_book();
                break;
            case 3:
                remove_book();
                break;
            case 4:
                update_book_status();
                break;
            case 5:
                save_books();
                printf("=== 프로그램 종료 ===\n");
                printf("프로그램이 종료되었습니다.\n");
                printf("===============\n");
                return 0;
            default:
                printf("잘못된 선택입니다. 다시 선택해주세요.\n");
        }
    }

    return 0;
}