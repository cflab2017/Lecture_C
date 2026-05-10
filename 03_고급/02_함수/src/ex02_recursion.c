#include <stdio.h>

long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

long long fib(int n) {
    if (n < 2) return n;
    return fib(n - 1) + fib(n - 2);
}

int main(void) {
    for (int i = 0; i <= 10; i++) {
        printf("%2d! = %lld,  fib(%2d) = %lld\n",
               i, factorial(i), i, fib(i));
    }
    return 0;
}
