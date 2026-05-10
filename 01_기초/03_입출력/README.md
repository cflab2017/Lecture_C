# 03. 입출력 (printf / scanf)

## 학습 목표
- `printf`의 서식 지정자(format specifier)를 익힌다.
- `scanf`로 사용자 입력을 받고 변수에 저장할 수 있다.
- 입력 시 자주 발생하는 오류(주소 연산자 `&` 누락 등)를 피한다.

## 개념 정리

### 1) 주요 서식 지정자

| 지정자 | 자료형 | 예 |
|--------|--------|----|
| `%d` | `int` (10진 정수) | `printf("%d", 42);` |
| `%u` | `unsigned int` | `printf("%u", 42u);` |
| `%f` | `float`, `double` | `printf("%.2f", 3.14);` |
| `%lf` | `double` (scanf) | `scanf("%lf", &x);` |
| `%c` | `char` | `printf("%c", 'A');` |
| `%s` | 문자열 | `printf("%s", "hi");` |
| `%x` | 16진 정수 | `printf("%x", 255);` -> ff |
| `%zu` | `size_t` | `printf("%zu", sizeof(int));` |

### 2) 너비/정밀도
```c
printf("[%5d]\n",   42);     // [   42]
printf("[%-5d]\n",  42);     // [42   ]
printf("[%05d]\n",  42);     // [00042]
printf("[%8.3f]\n", 3.14);   // [   3.140]
```

### 3) `scanf` 기본 사용
```c
int n;
scanf("%d", &n);          // & 연산자로 변수의 주소 전달
```

여러 값 입력:
```c
int a, b;
scanf("%d %d", &a, &b);
```

> **주의**: `scanf("%d", n);`처럼 `&`를 빼먹으면 런타임에 segmentation fault 가능.

### 4) 안전한 입력 (선택)
- `scanf("%9s", buf);` 처럼 너비를 지정해 버퍼 오버플로우 방지.
- 줄 단위 입력은 `fgets(buf, sizeof(buf), stdin);` 권장.

## 예제 목록
| 파일 | 설명 |
|------|------|
| `src/ex01_printf.c` | 다양한 서식 지정자 |
| `src/ex02_scanf_int.c` | 정수 입력 |
| `src/ex03_scanf_multi.c` | 여러 값 동시 입력 |
| `src/ex04_format.c` | 너비/정밀도 |

## 실행 (CLI)
```bash
echo "10 20" | ./ex03    # 표준 입력 파이프로 자동 입력
```

## 다음 단원
[04_연산자](../04_연산자/) — 산술/관계/논리/대입 연산자.
