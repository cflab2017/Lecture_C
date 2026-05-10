#include <stdio.h>

int main(void) {
    int arr[] = {100, 200, 300, 400};
    int *p = arr;

    /* p가 가리키는 자료형의 크기만큼 이동 */
    printf("p   -> %d (주소 %p)\n", *p, (void*)p);
    p++;
    printf("p+1 -> %d (주소 %p)\n", *p, (void*)p);
    p += 2;
    printf("p+3 -> %d (주소 %p)\n", *p, (void*)p);

    /* 두 포인터의 차 = 원소 개수 */
    int *first = arr, *last = &arr[3];
    printf("last - first = %ld\n", (long)(last - first));
    return 0;
}
