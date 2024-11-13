#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100] = {0};
    char search;
    int positions[100] = {0};
    int count = 0;

    printf("단어를 입력하세요: ");
    scanf("%s", str);

    printf("찾을 문자를 입력하세요: ");
    scanf(" %c", &search);

    int len = strlen(str);

    for(int i = 0; i < len; i++) {
        if(str[i] == search) {
            positions[count] = i+1;
            count++;
        }
    }

    if(count == 0) {
        printf("문자 '%c'는 문자열 내에 존재하지 않습니다.\n", search);
    } else {
        printf("문자 '%c'는 ", search);
        for(int i = 0; i < count; i++) {
            if(i == count-1) {
                printf("%d", positions[i]);
            } else {
                printf("%d, ", positions[i]);
            }
        }
        printf(" 번째에 위치해 있습니다.\n");
    }

    return 0;
}