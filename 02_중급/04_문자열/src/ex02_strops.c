#include <stdio.h>
#include <string.h>

int main(void) {
    char a[64] = "Hello";
    char b[]   = ", World!";
    char c[64];

    strcpy(c, a);
    strcat(a, b);

    printf("a = %s\n", a);
    printf("c = %s\n", c);
    printf("strcmp(\"abc\", \"abd\") = %d\n", strcmp("abc", "abd"));
    printf("strcmp(\"abc\", \"abc\") = %d\n", strcmp("abc", "abc"));
    return 0;
}
