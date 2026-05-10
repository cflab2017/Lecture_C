#include <stdio.h>

/* 윤년 판정: 4의 배수, 단 100의 배수는 제외, 400의 배수는 포함 */
int main(void) {
    int year;
    printf("연도 입력: ");
    scanf("%d", &year);

    int leap;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            leap = (year % 400 == 0);
        } else {
            leap = 1;
        }
    } else {
        leap = 0;
    }

    printf("%d년은 %s\n", year, leap ? "윤년입니다." : "윤년이 아닙니다.");
    return 0;
}
