# 13. 동적 메모리 할당

## 학습 목표
- `malloc`/`calloc`/`realloc`/`free`의 차이를 이해한다.
- 힙(heap)에 메모리를 할당하고 반드시 해제한다.
- 메모리 누수와 이중 해제, 댕글링 포인터 같은 흔한 오류를 안다.

## 개념 정리

### 1) 함수 요약 (`<stdlib.h>`)
| 함수 | 설명 |
|------|------|
| `void *malloc(size_t n)` | n바이트 할당 (초기화 X) |
| `void *calloc(size_t cnt, size_t sz)` | `cnt*sz`바이트 할당 후 0으로 초기화 |
| `void *realloc(void *p, size_t n)` | 기존 블록을 n바이트로 재할당 |
| `void free(void *p)` | 해제 |

### 2) 기본 사용 패턴
```c
int *arr = malloc(n * sizeof(int));
if (arr == NULL) { /* 실패 처리 */ }

/* ... 사용 ... */

free(arr);
arr = NULL;     // 댕글링 방지(선택)
```

### 3) 자주 만나는 실수
- **누수(leak)**: `free` 호출 누락.
- **이중 해제(double free)**: 같은 포인터를 두 번 해제 → 정의되지 않은 동작.
- **해제 후 사용(use-after-free)**: 댕글링 포인터.
- **크기 계산 실수**: `sizeof(int) * n`을 빼먹어서 작게 잡힘.

### 4) `realloc` 주의
```c
int *tmp = realloc(arr, new_size * sizeof(int));
if (tmp == NULL) { /* arr는 그대로 유효 */ }
else             { arr = tmp; }
```
`realloc` 결과를 **임시 변수**로 받아서 실패 시 원본을 잃지 않도록 합니다.

## 예제 목록
| 파일 | 설명 |
|------|------|
| `src/ex01_malloc.c` | 동적 배열 만들기 |
| `src/ex02_calloc.c` | calloc로 0 초기화 |
| `src/ex03_realloc.c` | 동적 크기 확장 |
| `src/ex04_2d.c` | 동적 2차원 배열 |

## 마무리

[메인 README](../../README.md) — 전체 커리큘럼 보기.
