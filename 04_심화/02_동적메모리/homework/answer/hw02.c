#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m;
    printf("행 N, 열 M: ");
    scanf("%d %d", &n, &m);

    int **mat = calloc((size_t)n, sizeof(int *));
    if (!mat) { perror("calloc"); return 1; }
    for (int i = 0; i < n; i++) {
        mat[i] = calloc((size_t)m, sizeof(int));
        if (!mat[i]) { perror("calloc"); return 1; }
    }

    int len = (n < m) ? n : m;
    for (int i = 0; i < len; i++) mat[i][i] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) printf("%2d", mat[i][j]);
        putchar('\n');
    }

    for (int i = 0; i < n; i++) free(mat[i]);
    free(mat);
    return 0;
}
