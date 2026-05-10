#include <stdio.h>

int main(void) {
    double f;
    printf("화씨 온도 입력: ");
    scanf("%lf", &f);

    double c = (f - 32) * 5.0 / 9.0;
    printf("섭씨: %.2f\n", c);
    return 0;
}
