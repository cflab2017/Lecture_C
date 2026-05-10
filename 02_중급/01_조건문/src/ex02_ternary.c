#include <stdio.h>

int main(void) {
    int a, b;
    printf("두 정수 입력: ");
    scanf("%d %d", &a, &b);

    int max = (a > b) ? a : b;
    int min = (a < b) ? a : b;
    const char *parity = (a % 2 == 0) ? "짝수" : "홀수";

    printf("최댓값: %d\n", max);
    printf("최솟값: %d\n", min);
    printf("a는 %s\n", parity);

    return 0;
}
