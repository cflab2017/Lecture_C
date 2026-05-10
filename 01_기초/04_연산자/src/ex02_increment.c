#include <stdio.h>

int main(void) {
    int a = 5;
    int b;

    b = a++;       // 후위: a 사용 후 증가
    printf("후위: a=%d, b=%d\n", a, b);   // a=6, b=5

    a = 5;
    b = ++a;       // 전위: a 먼저 증가
    printf("전위: a=%d, b=%d\n", a, b);   // a=6, b=6

    a += 10;       // a = a + 10
    printf("a += 10 -> %d\n", a);

    a *= 2;
    printf("a *= 2  -> %d\n", a);

    return 0;
}
