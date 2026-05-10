#include <stdio.h>

int main(void) {
    int a = 17, b = 5;

    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d  (정수 나눗셈)\n", a / b);
    printf("a %% b = %d  (나머지)\n", a % b);
    printf("a / (double)b = %.3f\n", a / (double)b);

    return 0;
}
