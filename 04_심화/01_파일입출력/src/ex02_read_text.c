#include <stdio.h>

int main(void) {
    FILE *fp = fopen("output.txt", "r");
    if (!fp) {
        perror("output.txt");
        printf("ex01_write_text를 먼저 실행하세요.\n");
        return 1;
    }

    char line[256];
    int ln = 1;
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%2d: %s", ln++, line);
    }
    fclose(fp);
    return 0;
}
