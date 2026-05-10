#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rows = 3, cols = 4;

    /* 행 포인터 배열 할당 */
    int **mat = malloc((size_t)rows * sizeof(int *));
    if (!mat) { perror("malloc"); return 1; }

    /* 각 행 할당 */
    for (int i = 0; i < rows; i++) {
        mat[i] = malloc((size_t)cols * sizeof(int));
        if (!mat[i]) { perror("malloc"); return 1; }
        for (int j = 0; j < cols; j++) mat[i][j] = i * cols + j + 1;
    }

    /* 출력 */
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) printf("%4d", mat[i][j]);
        putchar('\n');
    }

    /* 역순 해제 */
    for (int i = 0; i < rows; i++) free(mat[i]);
    free(mat);
    return 0;
}
