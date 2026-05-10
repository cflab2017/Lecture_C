#include <stdio.h>

int main(void) {
    int A[3][3];
    int T[3][3];

    printf("3x3 행렬 입력 (총 9개):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            T[j][i] = A[i][j];

    printf("전치 행렬:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) printf("%4d", T[i][j]);
        putchar('\n');
    }
    return 0;
}
