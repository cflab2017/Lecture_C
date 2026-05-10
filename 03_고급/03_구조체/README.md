# 11. 구조체 (struct)

서로 관련된 여러 값을 **하나의 자료형**으로 묶는 도구가 구조체입니다.
"이름은 string, 나이는 int, 점수는 double" 같은 묶음을 한 변수로 다룹니다.

## 학습 목표
- `struct`로 새 자료형을 정의한다.
- `typedef`로 별칭을 부여해 사용성을 높인다.
- 구조체 포인터에서 `->` 연산자를 쓴다.
- 구조체 배열로 레코드 모음을 관리한다.

## 왜 구조체가 필요한가? — 변수가 흩어지는 문제

학생 정보를 변수 따로따로 만들면:
```c
char  s1_name[32]; int s1_age; double s1_score;
char  s2_name[32]; int s2_age; double s2_score;
/* ... 학생 100명이면? */
```

배열로 묶어도 자료형이 다르면 한 배열에 못 담습니다.
구조체는 **자료형이 다른 멤버**들을 한 묶음으로 만듭니다.

```c
typedef struct {
    char name[32];
    int  age;
    double score;
} Student;

Student arr[100];   // 학생 100명을 한 배열에
```

## 핵심 개념

### 1) 정의와 초기화

```c
struct Point {
    int x;
    int y;
};

struct Point p1 = {3, 4};
struct Point p2 = {.x = 1, .y = 2};   // 지정 초기화 (C99)
```

### 2) `typedef`로 깔끔하게

```c
typedef struct {
    double x;
    double y;
} Point;

Point p = {10, 20};   // struct 키워드 없이 사용
```

### 3) 멤버 접근 — `.` vs `->`

```c
Point p = {3, 4};
Point *ptr = &p;

p.x;        // 점(.) 연산자: 구조체 변수에서 멤버 접근
ptr->x;     // 화살표(->): 포인터에서 멤버 접근. (*ptr).x 의 단축
```

```
   p (값)               ptr (포인터)
   ┌──────┐             ┌──────┐
   │ x: 3 │  ◄─────────│ &p   │
   │ y: 4 │             └──────┘
   └──────┘
   p.x = 3              ptr->x = 3
```

### 4) 구조체 배열

```c
typedef struct { char name[32]; int score; } Student;
Student class_[3] = {
    {"Kim", 90}, {"Lee", 85}, {"Park", 78},
};
class_[1].score;   // 85
```

각 원소는 독립된 구조체. 멤버 접근은 `arr[i].멤버`.

### 5) 구조체와 함수

큰 구조체는 값으로 넘기면 통째로 복사되어 비효율적입니다. **포인터로 전달**이 관용:

```c
void birthday(Person *p) { p->age++; }
birthday(&someone);
```

## 예제로 보기

### 예제 1 — `ex01_basic.c` : Point 구조체

```c
struct Point p1 = {3, 4};
struct Point p2 = {.x = 1, .y = 2};
p1.x = 10;
```

**실행 결과**
```
p1 = (3, 4)
p2 = (1, 2)
p1.x 변경 후 = (10, 4)
```

핵심: 멤버는 일반 변수처럼 읽고 쓸 수 있습니다.

### 예제 2 — `ex02_typedef.c` : 두 점 사이 거리

```c
typedef struct { double x, y; } Point;
double distance(Point a, Point b) {
    return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
}
```

**실행 결과**
```
거리: 5.00
```

핵심: 구조체를 **함수 인자/반환값**으로 그대로 쓸 수 있습니다 (값 전달).

### 예제 3 — `ex03_struct_array.c` : 학생 명단 평균

```c
Student class_[] = {
    {"Kim",  90}, {"Lee",  85}, {"Park", 78}, {"Choi", 92},
};
```

**실행 결과**
```
Kim    : 90
Lee    : 85
Park   : 78
Choi   : 92
평균: 86.25
```

핵심: 구조체 배열 + 반복문은 작은 데이터베이스의 시작.

### 예제 4 — `ex04_pointer.c` : 포인터로 멤버 수정

```c
typedef struct { char name[32]; int age; } Person;
void birthday(Person *p) { p->age += 1; }
```

**실행 결과**
```
생일 전: 홍길동, 20세
생일 후: 홍길동, 21세
```

핵심: 함수가 호출자의 구조체를 바꾸려면 포인터를 전달해야 합니다.

## 다른 시각으로 보기 — "이력서" 비유

```
   ┌──────── 이력서(struct Person) ────────┐
   │ 이름:    홍길동                       │
   │ 나이:    21                           │
   │ 키:      175.5                        │
   │ 학생증 사진(...)                       │
   └─────────────────────────────────────┘
```

이력서 한 장이 한 사람(`Person` 구조체 한 개) 입니다.
"이력서 100장 = `Person` 배열 100개"가 됩니다.

`.` vs `->`는 사실 같은 일을 합니다.

```c
ptr->x   ≡   (*ptr).x      // 완전히 동치
```

## 자주 하는 실수

1. **`struct` 누락**: `Point p;` 만 쓰면 typedef 안 했을 때 컴파일 오류.
   → 정의에 `typedef`를 함께 쓰는 습관.
2. **구조체 비교**: `if (p1 == p2)` 는 컴파일 오류. 멤버끼리 비교해야 함.
3. **큰 구조체 값 전달**: 매 호출마다 통째로 복사 → 포인터 전달 권장.
4. **포인터에 `.` 사용**: `ptr.x`는 오류. `ptr->x` 또는 `(*ptr).x`.
5. **패딩(padding)**: `sizeof(Student)`가 멤버 합보다 클 수 있음 (메모리 정렬 때문).

## 정리

- 구조체는 자료형이 다른 멤버들을 한 자료형으로 묶는다.
- `typedef`로 별칭을 만들면 사용성이 좋아진다.
- 구조체 변수는 `.`, 포인터는 `->`로 멤버에 접근.
- 큰 구조체는 포인터로 함수에 전달해 복사를 피한다.
- 구조체 배열은 작은 데이터베이스의 자연스러운 표현.

## 직접 해 보기

```bash
cd src
gcc -std=c11 -Wall -o ex01 ex01_basic.c        && ./ex01
gcc -std=c11 -Wall -o ex02 ex02_typedef.c -lm  && ./ex02
gcc -std=c11 -Wall -o ex03 ex03_struct_array.c && ./ex03
gcc -std=c11 -Wall -o ex04 ex04_pointer.c      && ./ex04
```

응용:
- `ex03`에서 평균이 가장 높은 학생의 이름을 함께 출력해 보세요.
- `ex04`에서 `birthday`를 `void birthday(Person p)` (값 전달)로 바꾸면 결과가 어떻게 달라질까요?

## 다음 단원
[04_심화/01_파일입출력](../../04_심화/01_파일입출력/) — 디스크에서 읽고 쓰기.
