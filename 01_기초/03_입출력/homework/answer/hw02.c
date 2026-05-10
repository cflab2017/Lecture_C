#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("세 정수 입력: ");
    scanf("%d %d %d", &a, &b, &c);

    double avg = (a + b + c) / 3.0;
    printf("평균: %.2f\n", avg);
    return 0;
}
