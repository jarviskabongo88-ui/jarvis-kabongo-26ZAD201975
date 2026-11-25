#include <stdio.h>

int main(void) {
    int originalValue = 100;
    int *ptrValue = &originalValue;

    printf("--- Initial State ---\n");
    printf("originalValue: %d\n", originalValue);
    printf("pointer alias value: %d\n", *ptrValue);
    printf("ptrValue points to: %d\n", *ptrValue);

    originalValue = 200;

    printf("\n--- After setting the value through the pointer alias ---\n");
    printf("originalValue: %d\n", originalValue);
    printf("ptrValue points to: %d\n", *ptrValue);

    *ptrValue = 300;

    printf("\n--- After setting *ptrValue = 300 ---\n");
    printf("originalValue: %d\n", originalValue);
    printf("pointer alias value: %d\n", *ptrValue);

    int anotherValue = 500;
    ptrValue = &anotherValue;

    printf("\n--- After pointing ptrValue to anotherValue ---\n");
    printf("originalValue: %d\n", originalValue);
    printf("ptrValue points to: %d\n", *ptrValue);

    return 0;
}
