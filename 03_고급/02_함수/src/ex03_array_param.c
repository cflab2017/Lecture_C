#include <stdio.h>

/* 배열 매개변수는 사실상 포인터로 전달된다 */
int sum(const int arr[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) s += arr[i];
    return s;
}

double average(const int arr[], int n) {
    return (double)sum(arr, n) / n;
}

int main(void) {
    int data[] = {10, 20, 30, 40, 50};
    int n = (int)(sizeof(data) / sizeof(data[0]));

    printf("합계: %d\n", sum(data, n));
    printf("평균: %.2f\n", average(data, n));
    return 0;
}
