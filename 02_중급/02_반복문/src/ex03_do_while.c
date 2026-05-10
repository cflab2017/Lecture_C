#include <stdio.h>

int main(void) {
    int choice;
    do {
        printf("\n=== 메뉴 ===\n");
        printf("1. 인사\n");
        printf("2. 시간\n");
        printf("0. 종료\n");
        printf("선택: ");
        if (scanf("%d", &choice) != 1) break;

        switch (choice) {
            case 1: printf("안녕하세요!\n"); break;
            case 2: printf("지금은 학습 시간입니다.\n"); break;
            case 0: printf("종료합니다.\n"); break;
            default: printf("잘못된 선택\n");
        }
    } while (choice != 0);

    return 0;
}
