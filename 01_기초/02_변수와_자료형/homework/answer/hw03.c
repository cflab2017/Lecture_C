#include <stdio.h>

#define LIGHT_SPEED 299792458   /* m/s */

int main(void) {
    long meters = LIGHT_SPEED;
    long km = meters / 1000;

    printf("빛은 1초 동안 약 %ld km 이동합니다.\n", km);
    return 0;
}
