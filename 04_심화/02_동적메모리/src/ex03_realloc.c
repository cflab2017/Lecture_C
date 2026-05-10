#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t cap = 4;
    size_t len = 0;
    int *arr = malloc(cap * sizeof(int));
    if (!arr) { perror("malloc"); return 1; }

    /* 10개를 추가하면서 필요할 때 확장 */
    for (int i = 0; i < 10; i++) {
        if (len == cap) {
            cap *= 2;
            int *tmp = realloc(arr, cap * sizeof(int));
            if (!tmp) { free(arr); perror("realloc"); return 1; }
            arr = tmp;
            printf("(용량 확장: %zu)\n", cap);
        }
        arr[len++] = (i + 1) * 100;
    }

    printf("최종 배열: ");
    for (size_t i = 0; i < len; i++) printf("%d ", arr[i]);
    putchar('\n');

    free(arr);
    return 0;
}
