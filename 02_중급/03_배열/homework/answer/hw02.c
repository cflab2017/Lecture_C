#include <stdio.h>

int main(void) {
    int arr[] = {5, 3, 8, 1, 9, 2};
    int n = (int)(sizeof(arr) / sizeof(arr[0]));

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    printf("정렬 결과: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    putchar('\n');
    return 0;
}
