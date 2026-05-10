#include <stdio.h>
#include <string.h>

int main(void) {
    char buf[256];
    char target;

    printf("문장: ");
    if (fgets(buf, sizeof(buf), stdin) == NULL) return 1;
    buf[strcspn(buf, "\n")] = '\0';

    printf("찾을 문자: ");
    scanf(" %c", &target);

    int count = 0;
    for (size_t i = 0; buf[i] != '\0'; i++)
        if (buf[i] == target) count++;

    printf("'%c'는 %d번 나타납니다.\n", target, count);
    return 0;
}
