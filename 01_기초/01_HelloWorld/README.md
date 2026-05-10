# 01. Hello, World!

## 학습 목표
- C 프로그램의 기본 구조를 이해한다.
- `gcc`로 컴파일하고 터미널에서 실행할 수 있다.
- 주석과 `printf`의 줄바꿈(`\n`) 동작을 안다.

## 개념 정리

### 1) 가장 단순한 C 프로그램
```c
#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");
    return 0;
}
```

| 요소 | 의미 |
|------|------|
| `#include <stdio.h>` | 표준 입출력 함수(예: `printf`)를 쓰기 위해 헤더를 포함 |
| `int main(void)` | 프로그램의 진입점. OS가 가장 먼저 호출 |
| `printf(...)` | 표준 출력으로 문자열 출력 |
| `\n` | 개행(줄바꿈) 이스케이프 시퀀스 |
| `return 0;` | 정상 종료를 OS에 알림 |

### 2) 컴파일과 실행 (CLI)
```bash
# 컴파일: -o 뒤가 실행파일 이름
gcc -std=c11 -Wall -Wextra -o hello src/ex01_hello.c

# 실행
./hello
```

### 3) 주석
```c
// 한 줄 주석
/* 여러 줄
   주석 */
```

## 예제 목록
| 파일 | 설명 |
|------|------|
| `src/ex01_hello.c` | 가장 기본적인 Hello World |
| `src/ex02_multiline.c` | `printf` 여러 번, 개행 처리 |
| `src/ex03_comments.c` | 주석 사용 예 |

## 직접 실행해 보기
```bash
cd src
gcc -std=c11 -Wall -o ex01 ex01_hello.c && ./ex01
gcc -std=c11 -Wall -o ex02 ex02_multiline.c && ./ex02
gcc -std=c11 -Wall -o ex03 ex03_comments.c && ./ex03
```

## 다음 단원
[02_변수와_자료형](../02_변수와_자료형/) — 변수 선언과 기본 자료형.
