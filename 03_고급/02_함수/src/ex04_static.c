#include <stdio.h>

int counter(void) {
    static int count = 0;   /* 호출 사이에 값이 유지됨 */
    count++;
    return count;
}

int main(void) {
    for (int i = 0; i < 5; i++) {
        printf("호출 %d -> %d\n", i + 1, counter());
    }
    return 0;
}
