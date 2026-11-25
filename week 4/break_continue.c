#include <stdio.h>

int main(void)
{
    int i;
    puts("number filter:skip multiple of 3. stop at 15");
    for (i = 1; i <= 20; i++) {
        if (i == 15) {
            printf("break at %d!\n", i);
            break;
        }
        if (i % 3 == 0) {
            printf("skip %d\n", i);
            continue;
        }
        printf("%d ", i);
    }
    putchar('\n');
    return 0;
}
