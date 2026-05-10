# 11. 구조체 (struct)

## 학습 목표
- `struct`로 사용자 정의 자료형을 만든다.
- `typedef`로 별칭을 부여한다.
- 구조체 배열, 구조체 포인터(`->` 연산자)를 사용한다.

## 개념 정리

### 1) 구조체 선언과 초기화
```c
struct Point {
    int x;
    int y;
};

struct Point p1 = {3, 4};
struct Point p2 = {.x = 1, .y = 2};   // 지정 초기화 (C99)
```

### 2) `typedef`
```c
typedef struct {
    int x;
    int y;
} Point;

Point p = {10, 20};
```

### 3) 멤버 접근
```c
Point p = {3, 4};
Point *ptr = &p;

p.x;        // 점(.) 연산자
ptr->x;     // 화살표(->) 연산자: (*ptr).x 의 단축
```

### 4) 구조체 배열
```c
typedef struct { char name[32]; int score; } Student;
Student class_[3] = {
    {"Kim", 90}, {"Lee", 85}, {"Park", 78},
};
```

## 예제 목록
| 파일 | 설명 |
|------|------|
| `src/ex01_basic.c` | Point 구조체 |
| `src/ex02_typedef.c` | typedef로 별칭 |
| `src/ex03_struct_array.c` | 학생 명단 평균 |
| `src/ex04_pointer.c` | 구조체 포인터와 `->` |

## 다음 단원
[04_심화/01_파일입출력](../../04_심화/01_파일입출력/) — 파일에서 읽고 쓰기.
