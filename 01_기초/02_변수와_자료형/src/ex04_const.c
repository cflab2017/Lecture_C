#include <stdio.h>

#define PI 3.14159
#define MAX_USERS 100

int main(void) {
    const int DAYS_IN_WEEK = 7;
    double radius = 5.0;

    printf("원주율(매크로): %f\n", PI);
    printf("최대 사용자(매크로): %d\n", MAX_USERS);
    printf("일주일(const): %d일\n", DAYS_IN_WEEK);
    printf("반지름 %.1f인 원의 넓이: %f\n", radius, PI * radius * radius);

    /* DAYS_IN_WEEK = 8;  // 컴파일 오류 - const는 변경 불가 */

    return 0;
}
