#include "CHJ.h"

int main(void) {
    double num1, num2, result;
    
    while (1) {
        information();  // �Լ��� ȣ��(00 ����)
        num1 = input();
        num2 = input();

        result = divide(num1, num2);

        output(result);
    }

    return 0;
}