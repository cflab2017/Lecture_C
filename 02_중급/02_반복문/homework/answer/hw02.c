#include <stdio.h>

int main(void) {
    int n;
    printf("N 입력: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) putchar('*');
        putchar('\n');
    }
    return 0;
}
