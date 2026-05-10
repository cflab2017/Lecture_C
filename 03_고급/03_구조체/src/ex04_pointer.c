#include <stdio.h>

typedef struct {
    char name[32];
    int  age;
} Person;

void birthday(Person *p) {
    p->age += 1;       /* 화살표로 멤버 접근 */
}

int main(void) {
    Person p = {"홍길동", 20};

    printf("생일 전: %s, %d세\n", p.name, p.age);
    birthday(&p);
    printf("생일 후: %s, %d세\n", p.name, p.age);
    return 0;
}
