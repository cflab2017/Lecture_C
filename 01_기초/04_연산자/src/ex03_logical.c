#include <stdio.h>

int main(void) {
    int a = 10, b = 20;

    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a <  b : %d\n", a <  b);
    printf("a >= b : %d\n", a >= b);

    int age = 25;
    int has_license = 1;

    printf("성인이고 면허 있음: %d\n", (age >= 18) && has_license);
    printf("미성년 또는 면허 없음: %d\n", (age < 18) || !has_license);

    return 0;
}
