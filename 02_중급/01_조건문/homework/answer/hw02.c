#include <stdio.h>

int main(void) {
    int age;
    printf("나이 입력: ");
    scanf("%d", &age);

    if (age < 0)        printf("잘못된 입력\n");
    else if (age <= 7)  printf("유아\n");
    else if (age <= 13) printf("어린이\n");
    else if (age <= 19) printf("청소년\n");
    else if (age <= 64) printf("성인\n");
    else                printf("노인\n");

    return 0;
}
