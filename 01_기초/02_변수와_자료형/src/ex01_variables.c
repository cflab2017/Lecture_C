#include <stdio.h>

int main(void) {
    int age = 20;
    int year;

    year = 2026;

    printf("나이: %d세\n", age);
    printf("연도: %d년\n", year);

    age = age + 1;
    printf("내년 나이: %d세\n", age);

    return 0;
}
