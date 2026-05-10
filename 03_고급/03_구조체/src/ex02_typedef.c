#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

double distance(Point a, Point b) {
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

int main(void) {
    Point p = {0, 0};
    Point q = {3, 4};

    printf("거리: %.2f\n", distance(p, q));   /* 5.00 */
    return 0;
}
