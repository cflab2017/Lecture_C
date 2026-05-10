# 02. 변수와 자료형

## 학습 목표
- 변수의 선언/초기화/대입을 구분할 수 있다.
- C의 기본 자료형(`int`, `float`, `double`, `char`)의 크기와 용도를 이해한다.
- `sizeof` 연산자로 자료형 크기를 확인할 수 있다.
- 상수(`const`, `#define`)를 사용할 수 있다.

## 개념 정리

### 1) 변수 선언과 초기화
```c
int   age = 20;       // 정수
float pi  = 3.14f;    // 단정밀도 실수
double e  = 2.71828;  // 배정밀도 실수
char  grade = 'A';    // 문자(1바이트)
```

### 2) 기본 자료형 요약 (64-bit Linux 기준)

| 자료형 | 크기 | 범위 |
|--------|------|------|
| `char` | 1 byte | -128 ~ 127 |
| `short` | 2 byte | -32,768 ~ 32,767 |
| `int` | 4 byte | 약 ±21억 |
| `long` | 8 byte | 매우 큼 |
| `float` | 4 byte | 약 7자리 정밀도 |
| `double` | 8 byte | 약 15자리 정밀도 |

`unsigned`를 붙이면 음수 없이 두 배 큰 양의 범위를 가집니다.

### 3) 상수
```c
#define PI 3.14159        // 전처리기 매크로 상수
const int MAX = 100;       // 변경 불가 변수
```

### 4) `sizeof` 연산자
```c
printf("%zu\n", sizeof(int));  // 보통 4
```

## 예제 목록
| 파일 | 설명 |
|------|------|
| `src/ex01_variables.c` | 변수 선언과 출력 |
| `src/ex02_types.c` | 정수/실수/문자 출력 형식 |
| `src/ex03_sizeof.c` | `sizeof`로 자료형 크기 확인 |
| `src/ex04_const.c` | `const`와 `#define` 상수 |

## 다음 단원
[03_입출력](../03_입출력/) — `scanf`로 입력 받기.
