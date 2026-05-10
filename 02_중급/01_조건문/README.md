# 05. 조건문 (if / else / switch)

## 학습 목표
- `if`, `else if`, `else`로 분기를 작성한다.
- 삼항 연산자 `?:`를 사용한다.
- `switch`문의 동작과 `break`의 역할을 이해한다.

## 개념 정리

### 1) `if` / `else`
```c
if (score >= 90) {
    printf("A\n");
} else if (score >= 80) {
    printf("B\n");
} else {
    printf("C 이하\n");
}
```

### 2) 삼항 연산자
```c
int max = (a > b) ? a : b;
```

### 3) `switch`
```c
switch (op) {
    case '+': result = a + b; break;
    case '-': result = a - b; break;
    default:  printf("알 수 없는 연산자\n");
}
```
- `break`가 없으면 다음 `case`로 흘러내림(fall-through).
- `case` 값은 **정수형 상수**여야 함 (문자열 불가).

## 예제 목록
| 파일 | 설명 |
|------|------|
| `src/ex01_if.c` | 점수 등급 분류 |
| `src/ex02_ternary.c` | 삼항 연산자로 최댓값 |
| `src/ex03_switch.c` | 사칙연산 계산기 |
| `src/ex04_nested_if.c` | 중첩 `if`로 윤년 판정 |

## 다음 단원
[02_반복문](../02_반복문/) — `for`, `while`, `do-while`.
