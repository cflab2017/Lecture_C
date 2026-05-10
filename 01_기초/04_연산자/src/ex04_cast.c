#include <stdio.h>

int main(void) {
    int total = 95, count = 4;

    double avg_wrong = total / count;
    double avg_right = (double)total / count;

    printf("잘못된 평균(정수 나눗셈): %.3f\n", avg_wrong);  // 23.000
    printf("올바른 평균(캐스팅):       %.3f\n", avg_right); // 23.750

    double pi = 3.99;
    int trunc = (int)pi;
    printf("(int)3.99 = %d  (소수점 절단)\n", trunc);

    return 0;
}
