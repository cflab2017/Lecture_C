#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("세 정수 입력: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    printf("최댓값: %d\n", max);
    return 0;
}
