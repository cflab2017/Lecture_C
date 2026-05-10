#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("N 입력: ");
    scanf("%d", &n);
    if (n <= 0) { printf("N은 양수여야 합니다.\n"); return 1; }

    int *arr = malloc((size_t)n * sizeof(int));
    if (!arr) { perror("malloc"); return 1; }

    printf("정수 %d개 입력: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int mx = arr[0], mn = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > mx) mx = arr[i];
        if (arr[i] < mn) mn = arr[i];
    }
    printf("최댓값: %d\n최솟값: %d\n", mx, mn);

    free(arr);
    return 0;
}
