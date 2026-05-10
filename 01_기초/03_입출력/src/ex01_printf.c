#include <stdio.h>

int main(void) {
    int    n = 255;
    double x = 3.141592;

    printf("10진: %d\n", n);
    printf("16진: %x\n", n);
    printf("8진:  %o\n", n);
    printf("문자: %c (코드 %d)\n", 'A', 'A');
    printf("문자열: %s\n", "Hello");
    printf("실수 기본: %f\n", x);
    printf("실수 두자리: %.2f\n", x);
    printf("지수표기: %e\n", x);

    return 0;
}
