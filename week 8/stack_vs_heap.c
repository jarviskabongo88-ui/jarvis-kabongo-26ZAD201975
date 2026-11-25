#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char model[100];
} Car;

static void car_init(Car *car, const char *model)
{
    (void)snprintf(car->model, sizeof car->model, "%s", model);
    printf("Car created: %s\n", car->model);
}

static void car_destroy(const Car *car)
{
    printf("Car destroyed: %s\n", car->model);
}

int main(void)
{
    Car stack_car;
    Car *heap_car;

    puts("--- Creating Stack Object ---");
    car_init(&stack_car, "Toyota");

    puts("\n--- Creating Heap Object ---");
    heap_car = malloc(sizeof *heap_car);
    if (heap_car == NULL) {
        car_destroy(&stack_car);
        return 1;
    }
    car_init(heap_car, "Honda");
    printf("Heap car model: %s\n", heap_car->model);

    puts("\n--- End of main function ---");
    car_destroy(heap_car);
    free(heap_car);
    car_destroy(&stack_car);
    return 0;
}
