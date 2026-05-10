#include <stdio.h>

int main(void) {
    int n;
    printf("정수 입력: ");
    scanf("%d", &n);

    int even     = (n % 2 == 0);
    int positive = (n > 0);
    int negative = (n < 0);

    printf("짝수=%d, 양수=%d, 음수=%d\n", even, positive, negative);
    return 0;
}
