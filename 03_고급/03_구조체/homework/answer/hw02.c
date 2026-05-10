#include <stdio.h>

typedef struct {
    char name[32];
    int kor, eng, math;
} Student;

int main(void) {
    Student arr[5] = {
        {"Kim",  90, 85, 92},
        {"Lee",  78, 88, 70},
        {"Park", 95, 91, 89},
        {"Choi", 60, 70, 65},
        {"Han",  88, 76, 82},
    };

    int top_idx = 0;
    double top_avg = 0;

    for (int i = 0; i < 5; i++) {
        double avg = (arr[i].kor + arr[i].eng + arr[i].math) / 3.0;
        printf("%-6s 평균 %.2f\n", arr[i].name, avg);
        if (avg > top_avg) { top_avg = avg; top_idx = i; }
    }

    printf("\n최고 평균: %s (%.2f)\n", arr[top_idx].name, top_avg);
    return 0;
}
