#include <stdio.h>

int main(void) {
    /* 1~20 중 짝수만 출력하다가 14를 만나면 종료 */
    for (int i = 1; i <= 20; i++) {
        if (i % 2 != 0) continue;   // 홀수는 건너뜀
        if (i == 14)    break;      // 14에서 종료
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
