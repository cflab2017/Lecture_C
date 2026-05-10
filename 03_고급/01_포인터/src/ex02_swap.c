#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main(void) {
    int x = 1, y = 2;
    printf("교환 전: x=%d, y=%d\n", x, y);
    swap(&x, &y);
    printf("교환 후: x=%d, y=%d\n", x, y);
    return 0;
}
