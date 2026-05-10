#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char buf[256];
    printf("문장 입력: ");
    if (fgets(buf, sizeof(buf), stdin) == NULL) return 1;
    buf[strcspn(buf, "\n")] = '\0';

    for (size_t i = 0; buf[i] != '\0'; i++)
        buf[i] = (char)toupper((unsigned char)buf[i]);

    printf("%s\n", buf);
    return 0;
}
