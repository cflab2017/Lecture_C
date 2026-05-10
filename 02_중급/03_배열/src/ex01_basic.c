#include <stdio.h>

int main(void) {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        printf("arr[%d] 입력: ", i);
        scanf("%d", &arr[i]);
    }

    printf("입력값: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    putchar('\n');
    return 0;
}
