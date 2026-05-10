#include <stdio.h>

static void swap(int *x, int *y) { int t = *x; *x = *y; *y = t; }

void sort3(int *a, int *b, int *c) {
    if (*a > *b) swap(a, b);
    if (*b > *c) swap(b, c);
    if (*a > *b) swap(a, b);
}

int main(void) {
    int a, b, c;
    printf("세 정수 입력: ");
    scanf("%d %d %d", &a, &b, &c);

    sort3(&a, &b, &c);
    printf("정렬: %d %d %d\n", a, b, c);
    return 0;
}
