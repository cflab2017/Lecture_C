#include <stdio.h>

int main(void) {
    int month;
    printf("월(1~12) 입력: ");
    scanf("%d", &month);

    int days;
    switch (month) {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            days = 31; break;
        case 4: case 6: case 9: case 11:
            days = 30; break;
        case 2:
            days = 28; break;
        default:
            printf("잘못된 입력\n");
            return 1;
    }

    printf("%d월은 %d일입니다.\n", month, days);
    return 0;
}
