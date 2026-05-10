#include <stdio.h>

int main(void) {
    int n;

    printf("정수를 입력하세요: ");
    if (scanf("%d", &n) != 1) {
        printf("입력 오류\n");
        return 1;
    }

    printf("입력값: %d\n", n);
    printf("두 배:  %d\n", n * 2);
    return 0;
}
