#include <stdio.h>
#include <stdlib.h>

void createLeak(void) {
    int *ptr = malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    *ptr = 42;
    printf("Inside function. The value is: %d\n", *ptr);
    printf("Memory allocated at address: %p\n", (void *)ptr);
}

void fixLeak(void) {
    int *ptr = malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    *ptr = 42;
    printf("Inside fixed function. Value: %d\n", *ptr);
    printf("Memory allocated at address: %p\n", (void *)ptr);

    free(ptr);
    ptr = NULL;
    printf("Memory has been successfully freed.\n");
}

int main(void) {
    printf("Calling function that leaks memory...\n");
    createLeak();
    printf("Function finished. The memory is now leaked.\n");

    printf("--- Testing the Fix ---\n");
    fixLeak();

    return 0;
}
