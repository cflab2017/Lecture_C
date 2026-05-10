#include <stdio.h>

int main(void) {
    double a, b, result = 0;
    char op;

    printf("식 입력 (예: 3 + 4): ");
    scanf("%lf %c %lf", &a, &op, &b);

    int ok = 1;
    switch (op) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/':
            if (b == 0) { printf("0으로 나눌 수 없습니다.\n"); ok = 0; }
            else result = a / b;
            break;
        default:
            printf("지원하지 않는 연산자: %c\n", op);
            ok = 0;
    }

    if (ok) printf("결과: %.3f\n", result);
    return 0;
}
