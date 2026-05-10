#include <stdio.h>

int main(void) {
    int score;
    printf("점수 입력 (0~100): ");
    scanf("%d", &score);

    if (score < 0 || score > 100) {
        printf("범위를 벗어났습니다.\n");
        return 1;
    }

    if (score >= 90)      printf("등급: A\n");
    else if (score >= 80) printf("등급: B\n");
    else if (score >= 70) printf("등급: C\n");
    else if (score >= 60) printf("등급: D\n");
    else                  printf("등급: F\n");

    return 0;
}
