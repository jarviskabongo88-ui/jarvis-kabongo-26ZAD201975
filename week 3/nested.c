#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter three numbers: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        return 1;
    }
    if (a > b && b > c) {
        puts("path 1");
    } else if (a > b && a > c) {
        puts("path 2");
    } else if (a > b) {
        puts("path 3");
    } else if (a > c) {
        puts("path 4");
    } else if (b > c) {
        puts("path 5");
    } else {
        puts("path 6");
    }
    return 0;
}
