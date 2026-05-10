# C 언어 강의 저장소 (Lecture_C)

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

### 컴파일러 다운로드 경로 (공식)

| 컴파일러 / 도구 | 다운로드 페이지 |
|-----------------|------------------|
| **GCC** (소스, 공식 미러) | https://gcc.gnu.org/mirrors.html |
| **GCC** 릴리스 아카이브 | https://ftp.gnu.org/gnu/gcc/ |
| **MinGW-w64** (Windows용 GCC) | https://www.mingw-w64.org/downloads/ |
| **MSYS2** (Windows GCC 패키지 매니저) | https://www.msys2.org/ |
| **TDM-GCC** (Windows 단순 인스톨러) | https://jmeubank.github.io/tdm-gcc/ (홈) · https://jmeubank.github.io/tdm-gcc/download/ (다운로드) |
| **WinLibs** (Windows GCC 바이너리 빌드) | https://winlibs.com/ |
| **LLVM / Clang** (전 OS) | https://releases.llvm.org/ |
| **Apple Xcode Command Line Tools** | https://developer.apple.com/download/all/ |
| **Homebrew** (macOS / Linux) | https://brew.sh/ |
| **MSYS2 GCC 패키지 검색** | https://packages.msys2.org/queue |
| **GNU Make** | https://www.gnu.org/software/make/ |

> 강의 환경(Ubuntu)은 패키지 매니저 설치를 권장합니다. 소스 빌드는 시간이 오래 걸립니다.

### 초보자 추천 — OS별로 한 가지씩

처음이라면 아래 조합이 가장 막히지 않습니다.

| OS | 추천 도구 | 설치 |
|----|-----------|------|
| **Windows** | **MSYS2 (UCRT64)** — 최신 GCC + 패키지 매니저로 업데이트 쉬움 | 인스톨러 실행 후 `pacman -S mingw-w64-ucrt-x86_64-gcc` |
| Windows (간편) | **TDM-GCC** — 한 번 설치로 끝내고 싶을 때 | 인스톨러 실행만 하면 됨 |
| **macOS** | **Xcode Command Line Tools** — `gcc` 명령은 clang이지만 학습용으로 충분 | 터미널에서 `xcode-select --install` |
| **Linux (Ubuntu/Debian)** | **build-essential** | `sudo apt install build-essential` |

에디터는 [**VS Code** + C/C++ 확장](https://code.visualstudio.com/docs/languages/cpp)
조합을 권장합니다. 디버거·자동완성·빌드가 GUI에서 한 번에 됩니다.
좀 더 무거운 통합 환경을 원한다면 [**CLion**](https://www.jetbrains.com/clion/)도 좋은 선택입니다.

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

### 단일 파일 빌드 — 가장 간단한 형태

처음에는 옵션 없이 시작해도 충분합니다.

```bash
gcc hello.c -o hello   # 컴파일
./hello                 # 실행
```

- `gcc`: GNU C 컴파일러 호출
- `hello.c`: 입력 소스 파일
- `-o hello`: 결과 실행 파일 이름. 빠뜨리면 기본값 `a.out`이 생성됨
- `./hello`: 현재 디렉터리(`.`)의 `hello`를 실행

### 단일 파일 빌드 — 학습용 권장 형태

경고와 표준을 명시해서 잠재적 버그를 미리 잡습니다.

```bash
gcc -std=c11 -Wall -Wextra -O2 -o hello 01_기초/01_HelloWorld/src/ex01_hello.c
./hello
```

각 옵션의 의미:

| 옵션 | 의미 | 빼면? |
|------|------|-------|
| `-std=c11` | 2011년 제정된 C 표준 문법 사용 | 컴파일러 기본 표준(보통 gnu17)으로 동작 |
| `-Wall` | "거의 모든" 경고 켜기 (미초기화 변수, 미사용 변수 등) | 잠재적 버그를 놓치기 쉬움 |
| `-Wextra` | `-Wall` 외 추가 경고 | 코드 품질 점검이 약해짐 |
| `-O2` | 최적화 레벨 2 (성능과 디버깅의 균형) | 무방. 학습엔 `-O0`도 OK |
| `-o 이름` | 결과 실행 파일의 이름 지정 | 기본값 `a.out`이 생성됨 |

### 디버깅에 적합한 옵션

학습 중에는 최적화를 끄고 디버그 정보를 넣는 편이 디버거(`gdb`) 사용에 유리합니다.

```bash
gcc -std=c11 -Wall -g -O0 hello.c -o hello
```

- `-g`: 디버그 정보 포함 (변수명/줄번호 등)
- `-O0`: 최적화 안 함 (코드 순서가 그대로 유지되어 한 줄씩 추적 가능)

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
