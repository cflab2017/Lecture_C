#include <stdio.h>

int main(void) {
    int n;
    printf("N 입력: ");
    scanf("%d", &n);

    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    printf("%d! = %lld\n", n, fact);
    return 0;
}
