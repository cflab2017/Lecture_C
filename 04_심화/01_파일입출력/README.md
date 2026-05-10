# 12. 파일 입출력

## 학습 목표
- `fopen`/`fclose`로 파일을 열고 닫는다.
- 텍스트 파일 읽기/쓰기 (`fprintf`, `fscanf`, `fgets`).
- 이진 파일 읽기/쓰기 (`fread`, `fwrite`).
- 모드 문자열의 의미를 안다.

## 개념 정리

### 1) 파일 열기와 닫기
```c
FILE *fp = fopen("data.txt", "r");
if (fp == NULL) {
    perror("열기 실패");
    return 1;
}
/* ... */
fclose(fp);
```

### 2) 모드 문자열

| 모드 | 의미 |
|------|------|
| `"r"` | 읽기 (없으면 실패) |
| `"w"` | 쓰기 (없으면 생성, 있으면 덮어씀) |
| `"a"` | 이어 쓰기 |
| `"r+"` | 읽기/쓰기 |
| `"rb"`, `"wb"` | 이진 모드 |

### 3) 텍스트 입출력
```c
fprintf(fp, "%s,%d\n", name, age);
fscanf(fp, "%s %d", name, &age);
fgets(buf, sizeof(buf), fp);
```

### 4) 이진 입출력
```c
fwrite(&value, sizeof(value), 1, fp);
fread(&value, sizeof(value), 1, fp);
```

### 5) 파일 끝 검사
- `feof(fp)` 보다 **읽기 함수의 반환값**으로 종료를 판정하는 것이 안전합니다.

```c
char line[256];
while (fgets(line, sizeof(line), fp) != NULL) {
    /* ... */
}
```

## 예제 목록
| 파일 | 설명 |
|------|------|
| `src/ex01_write_text.c` | 텍스트 파일 쓰기 |
| `src/ex02_read_text.c` | 텍스트 파일 읽기 |
| `src/ex03_append.c` | 이어 쓰기 모드 |
| `src/ex04_binary.c` | 이진 입출력 |

> 예제는 같은 디렉터리에 `.txt`/`.bin` 파일을 만듭니다.

## 다음 단원
[02_동적메모리](../02_동적메모리/) — `malloc`/`free`.
