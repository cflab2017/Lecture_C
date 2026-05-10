#include <stdio.h>

int main(void) {
    char name[64];
    int  age;

    printf("이름을 입력: ");
    scanf("%63s", name);

    printf("나이를 입력: ");
    scanf("%d", &age);

    printf("%s님은 %d세입니다.\n", name, age);
    return 0;
}
