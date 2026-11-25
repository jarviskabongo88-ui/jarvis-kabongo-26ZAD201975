#include <stdio.h>

int main(void)
{
    int i, j;
    puts("==============================");
    puts("Multiplication Table(1 to 10)");
    puts("==============================");
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%5d ", i * j);
        }
        putchar('\n');
    }
    puts("------------------------------");
    return 0;
}
