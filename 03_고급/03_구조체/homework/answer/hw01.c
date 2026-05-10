#include <stdio.h>

typedef struct {
    double x;
    double y;
} Vec2;

Vec2 add(Vec2 a, Vec2 b) {
    Vec2 r = {a.x + b.x, a.y + b.y};
    return r;
}

double dot(Vec2 a, Vec2 b) {
    return a.x * b.x + a.y * b.y;
}

int main(void) {
    Vec2 a = {1, 2}, b = {3, 4};
    Vec2 c = add(a, b);

    printf("a + b = (%.1f, %.1f)\n", c.x, c.y);
    printf("a . b = %.1f\n", dot(a, b));
    return 0;
}
