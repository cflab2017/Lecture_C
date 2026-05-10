#include <stdio.h>

int main(void) {
    int a, b;
    printf("두 정수 입력: ");
    scanf("%d %d", &a, &b);

    printf("합:    %d\n", a + b);
    printf("차:    %d\n", a - b);
    printf("곱:    %d\n", a * b);
    if (b != 0) {
        printf("몫:    %d\n", a / b);
        printf("나머지: %d\n", a % b);
        printf("실수 나눗셈: %.2f\n", (double)a / b);
    } else {
        printf("0으로 나눌 수 없습니다.\n");
    }
    return 0;
}
