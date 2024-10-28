#include "CHJ.h"

int main(void) {
    double num1, num2, result;
    
    while (1) {
        information();  // 함수의 호출(00 형태)
        num1 = input();
        num2 = input();

        result = divide(num1, num2);

        output(result);
    }

    return 0;
}