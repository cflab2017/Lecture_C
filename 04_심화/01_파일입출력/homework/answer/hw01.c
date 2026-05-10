#include <stdio.h>

int main(void) {
    FILE *fp = fopen("numbers.txt", "w");
    if (!fp) { perror("numbers.txt"); return 1; }

    printf("정수 5개 입력: ");
    for (int i = 0; i < 5; i++) {
        int n;
        scanf("%d", &n);
        fprintf(fp, "%d\n", n);
    }
    fclose(fp);
    printf("numbers.txt 저장 완료\n");
    return 0;
}
