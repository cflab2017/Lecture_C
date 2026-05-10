#include <stdio.h>

int main(void) {
    int a, b;

    printf("두 정수를 공백으로 구분해 입력: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("입력 오류\n");
        return 1;
    }

    printf("합:   %d\n", a + b);
    printf("차:   %d\n", a - b);
    printf("곱:   %d\n", a * b);
    if (b != 0)
        printf("몫:   %d\n", a / b);

    return 0;
}
