#include <stdio.h>
#include <time.h>

int main(void) {
    FILE *fp = fopen("log.txt", "a");
    if (!fp) { perror("log.txt"); return 1; }

    time_t t = time(NULL);
    fprintf(fp, "[%ld] 프로그램 실행 기록\n", (long)t);

    fclose(fp);
    printf("log.txt에 한 줄 추가됨\n");
    return 0;
}
