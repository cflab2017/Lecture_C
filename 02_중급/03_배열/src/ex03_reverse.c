#include <stdio.h>

int main(void) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    for (size_t i = 0; i < n / 2; i++) {
        int t = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = t;
    }

    printf("뒤집힌 결과: ");
    for (size_t i = 0; i < n; i++) printf("%d ", arr[i]);
    putchar('\n');
    return 0;
}
