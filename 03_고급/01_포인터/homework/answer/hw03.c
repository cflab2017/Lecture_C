#include <stdio.h>

void doubleAll(int *arr, int n) {
    for (int i = 0; i < n; i++) arr[i] *= 2;
}

int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    int n = (int)(sizeof(arr) / sizeof(arr[0]));

    doubleAll(arr, n);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    putchar('\n');
    return 0;
}
