# 08. 문자열

## 학습 목표
- C에서 문자열은 **널 문자(`\0`)로 끝나는 `char` 배열**임을 이해한다.
- `<string.h>`의 주요 함수(`strlen`, `strcpy`, `strcmp`, `strcat`)를 사용한다.
- `fgets`로 안전하게 한 줄 입력을 받는다.

## 개념 정리

### 1) 문자열의 표현
```c
char s1[] = "Hello";          // 6 byte: 'H','e','l','l','o','\0'
char s2[10] = "Hi";           // 나머지는 '\0'으로 채워짐
```

### 2) 주요 문자열 함수
| 함수 | 의미 |
|------|------|
| `strlen(s)` | 길이 (널 제외) |
| `strcpy(dst, src)` | 복사 (dst 버퍼가 충분해야 함) |
| `strcat(dst, src)` | dst 끝에 src 붙임 |
| `strcmp(a, b)` | 사전순 비교 (같으면 0) |

### 3) 안전한 입력
```c
char buf[64];
fgets(buf, sizeof(buf), stdin);   // 줄바꿈 포함 가능
buf[strcspn(buf, "\n")] = '\0';   // 줄바꿈 제거
```

`scanf("%s", ...)` 는 공백을 만나면 멈추므로, 문장 입력에는 `fgets`가 안전합니다.

## 예제 목록
| 파일 | 설명 |
|------|------|
| `src/ex01_basic.c` | 문자열 출력과 길이 |
| `src/ex02_strops.c` | strcpy, strcat, strcmp |
| `src/ex03_fgets.c` | fgets로 한 줄 입력 |
| `src/ex04_count.c` | 문자열 내 모음 개수 세기 |

## 다음 단원
[03_고급/01_포인터](../../03_고급/01_포인터/) — 포인터 입문.
