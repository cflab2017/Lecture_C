#include <stdio.h>

int main(void) {
    FILE *fp = fopen("numbers.txt", "r");
    if (!fp) { perror("numbers.txt"); return 1; }

    int n, sum = 0, count = 0;
    while (fscanf(fp, "%d", &n) == 1) {
        sum += n;
        count++;
    }
    fclose(fp);

    if (count == 0) { printf("데이터가 없습니다.\n"); return 0; }
    printf("합계: %d\n", sum);
    printf("평균: %.2f\n", (double)sum / count);
    return 0;
}
