#include <stdio.h>

int main(void) {
    int n;
    printf("N 입력: ");
    scanf("%d", &n);

    long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("1부터 %d까지의 합: %ld\n", n, sum);
    return 0;
}
