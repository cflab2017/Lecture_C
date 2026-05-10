#include <stdio.h>

int main(void) {
    int   n = 42;
    double pi = 3.14159265;

    printf("[%5d]\n",   n);
    printf("[%-5d]\n",  n);
    printf("[%05d]\n",  n);
    printf("[%10.4f]\n", pi);
    printf("[%-10.4f]\n", pi);

    return 0;
}
