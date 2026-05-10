#include <stdio.h>

int main(void) {
    int seconds;

    printf("초 단위 시간 입력: ");
    scanf("%d", &seconds);

    int h = seconds / 3600;
    int m = (seconds % 3600) / 60;
    int s = seconds % 60;

    printf("%d:%d:%d\n", h, m, s);
    return 0;
}
