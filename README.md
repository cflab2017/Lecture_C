# C 언어 강의 저장소 (Lecture_C)

> [코딩 도장 - C 언어](https://dojang.io/course/view.php?id=2) 커리큘럼을 참고하여
> **CLI(터미널) 환경**에서 진행하는 단계별 C 언어 학습 저장소입니다.

## 학습 목표

- C 언어 문법과 핵심 개념을 **예제 중심**으로 학습
- 단계(Level)별로 점진적으로 난이도 상승
- 각 단원마다 **실습 예제 → 과제 → 정답** 흐름으로 자기 주도 학습 가능
- 모든 코드는 **CLI(명령줄)** 에서 컴파일/실행

## 개발 환경

본 저장소는 다음 환경에서 검증되었습니다.

| 항목 | 버전 |
|------|------|
| OS | Linux (Ubuntu 24.04) |
| 컴파일러 | gcc 13.3.0 |
| 표준 | C11 (`-std=c11`) |
| 빌드 도구 | GNU Make |

### gcc 설치 경로

본 저장소가 검증된 환경의 실제 경로입니다.

| 항목 | 경로 |
|------|------|
| 실행 파일 | `/usr/bin/gcc` |
| 컴파일러 백엔드 (`cc1`) | `/usr/libexec/gcc/x86_64-linux-gnu/13/cc1` |
| 라이브러리/내부 검색 루트 | `/usr/lib/gcc/x86_64-linux-gnu/13/` |
| 표준 헤더 (예: `stdio.h`) | `/usr/include/` |

### 환경 확인

```bash
which gcc                       # /usr/bin/gcc
gcc --version                   # gcc 13.3.0
gcc -print-prog-name=cc1        # cc1 실제 경로
gcc -print-search-dirs          # 라이브러리/프로그램 검색 경로
make --version
```

### OS별 설치 경로 / 설치 방법

| OS | 설치 명령 | 기본 설치 경로 |
|----|-----------|----------------|
| Ubuntu / Debian | `sudo apt install build-essential` | `/usr/bin/gcc` |
| Fedora / RHEL | `sudo dnf install gcc make` | `/usr/bin/gcc` |
| macOS (Homebrew) | `brew install gcc` | `/opt/homebrew/bin/gcc-14` (Apple Silicon) / `/usr/local/bin/gcc-14` (Intel) |
| macOS (Xcode CLI Tools) | `xcode-select --install` | `/usr/bin/gcc` (실제로는 clang) |
| Windows (MSYS2 UCRT64) | `pacman -S mingw-w64-ucrt-x86_64-gcc` | `C:\msys64\ucrt64\bin\gcc.exe` |
| Windows (MinGW-w64) | 인스톨러 사용 | `C:\mingw64\bin\gcc.exe` |

## 디렉터리 구조

```
Lecture_C/
├── 01_기초/                # Level 1: 입문자
│   ├── 01_HelloWorld/
│   ├── 02_변수와_자료형/
│   ├── 03_입출력/
│   └── 04_연산자/
├── 02_중급/                # Level 2: 제어 흐름과 자료 구조
│   ├── 01_조건문/
│   ├── 02_반복문/
│   ├── 03_배열/
│   └── 04_문자열/
├── 03_고급/                # Level 3: 핵심 응용
│   ├── 01_포인터/
│   ├── 02_함수/
│   └── 03_구조체/
├── 04_심화/                # Level 4: 실전
│   ├── 01_파일입출력/
│   └── 02_동적메모리/
├── Makefile                # 일괄 빌드/실행 스크립트
└── README.md
```

각 단원 폴더는 다음과 같이 구성됩니다.

```
NN_단원명/
├── README.md           # 강의 본문 (개념 + 예제 설명)
├── src/                # 실습 예제 소스 코드
│   ├── ex01_xxx.c
│   └── ...
└── homework/
    ├── README.md       # 과제 문제
    └── answer/         # 과제 정답 코드
        └── hw01.c
```

## 빌드 & 실행

### 단일 파일 빌드

```bash
gcc -std=c11 -Wall -Wextra -O2 -o hello 01_기초/01_HelloWorld/src/ex01_hello.c
./hello
```

### Makefile 사용 (루트)

```bash
make all        # 전 단원 예제 빌드 (build/ 디렉터리에 출력)
make clean      # 빌드 산출물 제거
make list       # 빌드 가능한 예제 목록 보기
```

## 학습 순서

1. 각 단원의 `README.md`를 읽고 개념을 이해합니다.
2. `src/` 안의 예제를 직접 컴파일/실행하며 결과를 관찰합니다.
3. `homework/README.md`의 과제를 **먼저 직접** 풀어봅니다.
4. 막히면 `homework/answer/`의 정답을 참고합니다.

## 단계별 커리큘럼 요약

### Level 1 — 기초
C 프로그램의 구조, 변수와 자료형, `printf`/`scanf`, 산술/비교/논리 연산자.

### Level 2 — 중급
`if`/`switch`, `for`/`while`/`do-while`, 1·2차원 배열, 문자열 처리(`<string.h>`).

### Level 3 — 고급
포인터의 개념과 활용, 함수 정의·호출·재귀, 구조체와 `typedef`.

### Level 4 — 심화
`fopen`/`fread`/`fwrite` 기반 파일 입출력, `malloc`/`free` 동적 메모리 관리.

## 라이선스

학습용 자료. 자유롭게 복제·수정 가능.
