#include <stdio.h>

int main(void) {
    int arr[10];
    int sum = 0;

    printf("정수 10개 입력: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("합계: %d\n", sum);
    printf("평균: %.2f\n", sum / 10.0);
    return 0;
}
