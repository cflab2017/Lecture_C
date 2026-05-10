CC      := gcc
CFLAGS  := -std=c11 -Wall -Wextra -O2
LDLIBS  := -lm

BUILD_DIR := build

SRCS := $(shell find 01_기초 02_중급 03_고급 04_심화 -name '*.c')
BINS := $(patsubst %.c,$(BUILD_DIR)/%,$(SRCS))

.PHONY: all clean list help

all: $(BINS)
	@echo "전체 예제/과제 빌드 완료 -> $(BUILD_DIR)/"

$(BUILD_DIR)/%: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ $< $(LDLIBS)

list:
	@echo "빌드 가능한 소스 파일:"
	@printf '  %s\n' $(SRCS)

clean:
	rm -rf $(BUILD_DIR)

help:
	@echo "사용법:"
	@echo "  make all     - 모든 예제 빌드 ($(BUILD_DIR)/ 아래에 출력)"
	@echo "  make list    - 빌드 대상 소스 목록"
	@echo "  make clean   - 빌드 산출물 삭제"
	@echo ""
	@echo "단일 파일 빌드 예:"
	@echo "  gcc -std=c11 -Wall -o hello 01_기초/01_HelloWorld/src/ex01_hello.c"
