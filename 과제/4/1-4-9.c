#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LIKE 1

int main(void)
{
    int a, b;
    int Aaddress, Baddress;
    int dis;
    
    Aaddress = &a;
    Baddress = &b;
    dis = Aaddress - Baddress;
    
    printf("상수 LIKE: %d, a의 주소: %d, b의 주소: %d\n", LIKE, Aaddress, Baddress);
    printf("LIKE * dis : %d\n", LIKE * dis);
    
    return 0;
}



