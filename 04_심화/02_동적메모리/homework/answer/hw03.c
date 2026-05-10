#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strdup(const char *s) {
    size_t len = strlen(s);
    char *copy = malloc(len + 1);
    if (!copy) return NULL;
    memcpy(copy, s, len + 1);   /* 널 문자 포함 */
    return copy;
}

int main(void) {
    char buf[256];
    printf("문장 입력: ");
    if (fgets(buf, sizeof(buf), stdin) == NULL) return 1;
    buf[strcspn(buf, "\n")] = '\0';

    char *dup = my_strdup(buf);
    if (!dup) { perror("malloc"); return 1; }

    printf("원본:  %s\n", buf);
    printf("복사본: %s\n", dup);

    free(dup);
    return 0;
}
