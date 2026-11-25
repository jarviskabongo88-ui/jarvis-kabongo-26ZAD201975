#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int size;
    int capacity;
} DynamicArray;

void dynamic_array_init(DynamicArray *array, int initialCapacity) {
    array->capacity = initialCapacity;
    array->size = 0;
    array->data = malloc((size_t)initialCapacity * sizeof(int));
}

void dynamic_array_destroy(DynamicArray *array) {
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
}

void dynamic_array_push_back(DynamicArray *array, int value) {
    if (array->size == array->capacity) {
        int oldCapacity = array->capacity;
        int newCapacity = array->capacity * 2;
        int *newData = malloc((size_t)newCapacity * sizeof(int));

        if (newData == NULL) {
            printf("Memory allocation failed.\n");
            return;
        }

        for (int i = 0; i < array->size; i++) {
            newData[i] = array->data[i];
        }

        free(array->data);
        array->data = newData;
        array->capacity = newCapacity;
        printf("[Resized capacity from %d to %d]\n",
               oldCapacity, array->capacity);
    }

    array->data[array->size] = value;
    array->size++;
}

void dynamic_array_display(const DynamicArray *array) {
    printf("Array (Size: %d, Capacity: %d): ", array->size, array->capacity);
    for (int i = 0; i < array->size; i++) {
        printf("%d ", array->data[i]);
    }
    printf("\n");
}

int main(void) {
    DynamicArray myArray;
    dynamic_array_init(&myArray, 2);

    printf("Created dynamic array with capacity 2.\n");
    dynamic_array_push_back(&myArray, 10);
    dynamic_array_push_back(&myArray, 20);
    dynamic_array_display(&myArray);

    printf("\nAdding third element...\n");
    dynamic_array_push_back(&myArray, 30);
    dynamic_array_display(&myArray);

    printf("\nAdding fourth and fifth elements...\n");
    dynamic_array_push_back(&myArray, 40);
    dynamic_array_push_back(&myArray, 50);
    dynamic_array_display(&myArray);

    dynamic_array_destroy(&myArray);
    return 0;
}
