#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("배열 크기 입력: ");
    scanf("%d", &n);

    int *arr = malloc((size_t)n * sizeof(int));
    if (arr == NULL) { perror("malloc"); return 1; }

    for (int i = 0; i < n; i++) arr[i] = (i + 1) * 10;

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    putchar('\n');

    free(arr);
    return 0;
}
