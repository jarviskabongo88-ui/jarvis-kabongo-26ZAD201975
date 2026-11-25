#include <stdio.h>

int linearsearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    int numbers[8] = {15, 42, 7, 89, 23, 56, 11, 74};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target;

    printf("array contents:\n");
    printf("enter a number to search:");
    scanf("%d", &target);

    int position = linearsearch(numbers, size, target);
    if (position != -1) {
        printf("enlement found at index:%d\n", position);
    } else {
        printf("elemant not found in array.\n");
    }
    return 0;
}
