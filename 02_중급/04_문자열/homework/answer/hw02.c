#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char buf[256];
    printf("문장 입력: ");
    if (fgets(buf, sizeof(buf), stdin) == NULL) return 1;
    buf[strcspn(buf, "\n")] = '\0';

    int len = (int)strlen(buf);
    int palindrome = 1;
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char a = (char)tolower((unsigned char)buf[i]);
        char b = (char)tolower((unsigned char)buf[j]);
        if (a != b) { palindrome = 0; break; }
    }

    printf("%s\n", palindrome ? "회문 입니다." : "회문이 아닙니다.");
    return 0;
}
