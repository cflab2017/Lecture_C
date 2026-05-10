#include <stdio.h>

int main(void) {
    int arr[] = {12, 7, 38, 21, 9, 56, 3, 44};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    int idx = 0;
    for (size_t i = 1; i < n; i++) {
        if (arr[i] > max) { max = arr[i]; idx = (int)i; }
    }

    printf("최댓값: %d (인덱스 %d)\n", max, idx);
    return 0;
}
