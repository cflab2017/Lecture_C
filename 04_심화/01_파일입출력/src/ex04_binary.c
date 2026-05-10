#include <stdio.h>

typedef struct {
    int  id;
    char name[32];
    double score;
} Record;

int main(void) {
    Record out[] = {
        {1, "Kim",  90.5},
        {2, "Lee",  85.0},
        {3, "Park", 77.5},
    };
    int n = (int)(sizeof(out) / sizeof(out[0]));

    FILE *fp = fopen("data.bin", "wb");
    if (!fp) { perror("data.bin"); return 1; }
    fwrite(out, sizeof(Record), n, fp);
    fclose(fp);

    Record in[3];
    fp = fopen("data.bin", "rb");
    if (!fp) { perror("data.bin"); return 1; }
    size_t r = fread(in, sizeof(Record), n, fp);
    fclose(fp);

    printf("읽은 레코드 수: %zu\n", r);
    for (size_t i = 0; i < r; i++) {
        printf("%d %-6s %.2f\n", in[i].id, in[i].name, in[i].score);
    }
    return 0;
}
