#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char buf[256];
    printf("영문 문장 입력: ");
    if (fgets(buf, sizeof(buf), stdin) == NULL) return 1;
    buf[strcspn(buf, "\n")] = '\0';

    int vowels = 0, consonants = 0;
    for (size_t i = 0; buf[i] != '\0'; i++) {
        char ch = (char)tolower((unsigned char)buf[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("모음: %d, 자음: %d\n", vowels, consonants);
    return 0;
}
