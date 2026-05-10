#include <stdio.h>

void printBinary(unsigned int n) {
    if (n > 1) printBinary(n / 2);
    putchar('0' + (n % 2));
}

int main(void) {
    unsigned int n;
    printf("양의 정수 입력: ");
    scanf("%u", &n);

    printBinary(n);
    putchar('\n');
    return 0;
}
