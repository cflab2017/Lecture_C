#include <stdio.h>

typedef struct {
    char name[32];
    int  score;
} Student;

int main(void) {
    Student class_[] = {
        {"Kim",  90},
        {"Lee",  85},
        {"Park", 78},
        {"Choi", 92},
    };
    int n = (int)(sizeof(class_) / sizeof(class_[0]));

    int sum = 0;
    for (int i = 0; i < n; i++) {
        printf("%-6s : %d\n", class_[i].name, class_[i].score);
        sum += class_[i].score;
    }
    printf("평균: %.2f\n", (double)sum / n);
    return 0;
}
