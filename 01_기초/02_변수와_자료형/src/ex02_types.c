#include <stdio.h>

int main(void) {
    int    score = 95;
    float  ratio = 0.75f;
    double price = 19999.99;
    char   grade = 'A';

    printf("정수 (%%d): %d\n", score);
    printf("실수 (%%f): %f\n", ratio);
    printf("실수 (%%.2f): %.2f\n", ratio);
    printf("배정밀도 (%%lf): %lf\n", price);
    printf("문자 (%%c): %c\n", grade);
    printf("문자의 ASCII (%%d): %d\n", grade);

    return 0;
}
