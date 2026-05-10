#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t n = 5;
    int *arr = calloc(n, sizeof(int));   /* 0으로 초기화 */
    if (!arr) { perror("calloc"); return 1; }

    printf("calloc 직후: ");
    for (size_t i = 0; i < n; i++) printf("%d ", arr[i]);
    putchar('\n');

    free(arr);
    return 0;
}
