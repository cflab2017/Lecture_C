#include <stdio.h>

int main(void) {
    int side = 4;
    int volume = side * side * side;
    int surface = 6 * side * side;

    printf("부피: %d\n", volume);
    printf("겉넓이: %d\n", surface);

    return 0;
}
