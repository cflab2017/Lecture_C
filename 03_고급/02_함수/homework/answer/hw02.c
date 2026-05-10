#include <stdio.h>

int find_max_index(const int *arr, int n) {
    int idx = 0;
    for (int i = 1; i < n; i++)
        if (arr[i] > arr[idx]) idx = i;
    return idx;
}

int main(void) {
    int arr[] = {3, 7, 2, 8, 5, 8, 1};
    int n = (int)(sizeof(arr) / sizeof(arr[0]));

    int idx = find_max_index(arr, n);
    printf("최댓값 %d는 인덱스 %d에 있습니다.\n", arr[idx], idx);
    return 0;
}
