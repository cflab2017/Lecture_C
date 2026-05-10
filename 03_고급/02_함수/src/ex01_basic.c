#include <stdio.h>

int add(int a, int b);
int max(int a, int b);
void print_line(void);

int main(void) {
    print_line();
    printf("add(3, 4) = %d\n", add(3, 4));
    printf("max(7, 2) = %d\n", max(7, 2));
    print_line();
    return 0;
}

int add(int a, int b) { return a + b; }
int max(int a, int b) { return a > b ? a : b; }
void print_line(void) { printf("--------------------\n"); }
