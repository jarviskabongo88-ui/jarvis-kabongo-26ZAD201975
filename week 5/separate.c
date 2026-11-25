#include <stdio.h>

static void swap_by_value(int a, int b)
{
    int temp;
    printf("inside function - before swap:a=%d,b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("inside function - after swap:a =%d,b =%d\n", a, b);
}

int main(void)
{
    int x = 10;
    int y = 20;
    puts("Before calling swapByValue:");
    printf("x =%d,y =%d\n", x, y);
    swap_by_value(x, y);
    puts("After calling swapByValue:");
    printf("x =%d,y =%d\n", x, y);
    return 0;
}
