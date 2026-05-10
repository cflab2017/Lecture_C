#include <stdio.h>

int sum(const int *arr, int n) {
    int s = 0;
    for (int i = 0; i < n; i++) s += arr[i];
    return s;
}

int main(void) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = (int)(sizeof(arr) / sizeof(arr[0]));
    printf("합계: %d\n", sum(arr, n));
    return 0;
}
