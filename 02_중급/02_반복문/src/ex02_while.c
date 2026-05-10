#include <stdio.h>

int main(void) {
    int n;
    printf("정수 입력: ");
    scanf("%d", &n);

    int original = n;
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("%d의 자릿수 합: %d\n", original, sum);
    return 0;
}
