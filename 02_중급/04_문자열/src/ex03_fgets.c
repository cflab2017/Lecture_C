#include <stdio.h>
#include <string.h>

int main(void) {
    char line[128];

    printf("문장 입력: ");
    if (fgets(line, sizeof(line), stdin) == NULL) return 1;

    line[strcspn(line, "\n")] = '\0';   /* 끝의 \n 제거 */

    printf("입력값: \"%s\"\n", line);
    printf("길이:   %zu\n", strlen(line));
    return 0;
}
