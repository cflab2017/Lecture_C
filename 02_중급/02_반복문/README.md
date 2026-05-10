# 06. 반복문 (for / while / do-while)

## 학습 목표
- `for`, `while`, `do-while`을 상황에 맞게 선택한다.
- `break`, `continue`로 흐름을 제어한다.
- 중첩 반복문으로 2차원 패턴을 만든다.

## 개념 정리

### 1) `for` 문
```c
for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
}
```
- 횟수가 명확할 때 적합.

### 2) `while` 문
```c
while (조건) {
    /* ... */
}
```
- 조건이 만족되는 동안 반복. **0회 실행 가능**.

### 3) `do-while` 문
```c
do {
    /* ... */
} while (조건);
```
- **최소 1회**는 실행되어야 할 때 적합 (메뉴 입력 등).

### 4) `break` / `continue`
- `break`: 가장 가까운 반복문을 즉시 종료.
- `continue`: 다음 반복으로 건너뜀.

## 예제 목록
| 파일 | 설명 |
|------|------|
| `src/ex01_for.c` | 1~N 합 |
| `src/ex02_while.c` | 1234와 같은 자릿수 합 |
| `src/ex03_do_while.c` | 메뉴 반복 입력 |
| `src/ex04_nested.c` | 구구단 출력 |
| `src/ex05_break_continue.c` | break/continue 사용 |

## 다음 단원
[03_배열](../03_배열/) — 배열 선언과 순회.
