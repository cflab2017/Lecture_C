#include <stdio.h>

typedef struct {
    int w;
    int h;
} Rect;

int area(const Rect *r)      { return r->w * r->h; }
int perimeter(const Rect *r) { return 2 * (r->w + r->h); }

int main(void) {
    Rect r = {5, 3};
    printf("넓이:  %d\n", area(&r));
    printf("둘레:  %d\n", perimeter(&r));
    return 0;
}
