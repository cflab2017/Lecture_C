#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main(void) {
    struct Point p1 = {3, 4};
    struct Point p2 = {.x = 1, .y = 2};

    printf("p1 = (%d, %d)\n", p1.x, p1.y);
    printf("p2 = (%d, %d)\n", p2.x, p2.y);

    p1.x = 10;
    printf("p1.x 변경 후 = (%d, %d)\n", p1.x, p1.y);
    return 0;
}
