#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "Hello, C!";

    printf("문자열: %s\n", s);
    printf("길이:   %zu\n", strlen(s));

    /* 한 글자씩 출력 */
    for (size_t i = 0; s[i] != '\0'; i++) {
        printf("s[%zu] = %c (코드 %d)\n", i, s[i], s[i]);
    }
    return 0;
}
