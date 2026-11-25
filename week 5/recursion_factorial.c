#include <stdio.h>

static int factorial_recursive(int n)
{
    if (n <= 1) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}

static int factorial_tail(int n, int accumulator)
{
    if (n <= 1) {
        return accumulator;
    }
    return factorial_tail(n - 1, n * accumulator);
}

int main(void)
{
    int num;
    printf("Enter a number to calculate factorial: ");
    if (scanf("%d", &num) != 1) {
        return 1;
    }
    if (num < 0) {
        puts("Factorial is not defined for negative numbers.");
        return 1;
    }
    printf("\nUsing simple recursion:\n");
    printf(" %d! = %d\n", num, factorial_recursive(num));
    printf("\nUsing tail recursion:\n");
    printf(" %d! = %d\n", num, factorial_tail(num, 1));
    puts("\n--- Comparison ---");
    puts("Simple recursion: Clear, matches mathematical definition.");
    puts("Tail recursion: More efficient for large n (compiler optimization).");
    return 0;
}
