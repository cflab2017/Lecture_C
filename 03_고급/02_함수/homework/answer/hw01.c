#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(void) {
    int a, b;
    printf("두 정수: ");
    scanf("%d %d", &a, &b);

    printf("GCD(%d, %d) = %d\n", a, b, gcd(a, b));
    return 0;
}
