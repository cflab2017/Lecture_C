#include <stdio.h>

int main(void) {
    int count = 0;

    FILE *fp = fopen("count.bin", "rb");
    if (fp) {
        fread(&count, sizeof(int), 1, fp);
        fclose(fp);
    }

    count++;

    fp = fopen("count.bin", "wb");
    if (!fp) { perror("count.bin"); return 1; }
    fwrite(&count, sizeof(int), 1, fp);
    fclose(fp);

    printf("실행 횟수: %d\n", count);
    return 0;
}
