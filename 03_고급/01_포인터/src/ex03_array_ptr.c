#include <stdio.h>

int main(void) {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    for (int i = 0; i < 5; i++) {
        printf("arr[%d]=%d, *(p+%d)=%d, p[%d]=%d\n",
               i, arr[i], i, *(p + i), i, p[i]);
    }

    printf("sizeof(arr) = %zu\n", sizeof(arr));   // 20
    printf("sizeof(p)   = %zu\n", sizeof(p));     // 8 (64-bit)
    return 0;
}
