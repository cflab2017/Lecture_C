#include <stdio.h>

int main(void) {
    int x = 42;
    int *p = &x;

    printf("x의 값:    %d\n", x);
    printf("x의 주소:  %p\n", (void*)&x);
    printf("p의 값:    %p   (= x의 주소)\n", (void*)p);
    printf("*p:        %d   (p가 가리키는 값)\n", *p);

    *p = 100;
    printf("*p = 100 이후 x = %d\n", x);
    return 0;
}
