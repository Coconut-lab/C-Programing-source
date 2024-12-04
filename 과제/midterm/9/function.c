int sum(int a, int b) {
    return a + b;
}
int minus(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
double divide(int a, int b) {
    return a / b;
}

int absolute(int num) {
    if (num >=0) {
        return num;
    } else {
        return -num;
    }
}

char reverse(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + 32;
    } else if (ch >= 'a' && ch <= 'z') {
        return ch - 32;
    } else {
        return 0;
    }
}