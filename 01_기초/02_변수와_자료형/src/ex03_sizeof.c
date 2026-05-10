#include <stdio.h>

int main(void) {
    printf("char   = %zu byte\n", sizeof(char));
    printf("short  = %zu byte\n", sizeof(short));
    printf("int    = %zu byte\n", sizeof(int));
    printf("long   = %zu byte\n", sizeof(long));
    printf("float  = %zu byte\n", sizeof(float));
    printf("double = %zu byte\n", sizeof(double));

    int a = 0;
    printf("변수 a의 크기: %zu byte\n", sizeof(a));

    return 0;
}
