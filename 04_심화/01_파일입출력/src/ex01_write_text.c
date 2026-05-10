#include <stdio.h>

int main(void) {
    FILE *fp = fopen("output.txt", "w");
    if (!fp) { perror("output.txt"); return 1; }

    fprintf(fp, "이름,점수\n");
    fprintf(fp, "%s,%d\n", "Kim",  90);
    fprintf(fp, "%s,%d\n", "Lee",  85);
    fprintf(fp, "%s,%d\n", "Park", 78);

    fclose(fp);
    printf("output.txt 작성 완료\n");
    return 0;
}
