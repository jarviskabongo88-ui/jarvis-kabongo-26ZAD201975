#include <stdio.h>
#include <stdlib.h>

typedef struct Animal Animal;
struct Animal {
    void (*speak)(const Animal *animal);
};

typedef struct {
    Animal base;
} Dog;

static void dog_speak(const Animal *animal)
{
    (void)animal;
    puts("Dog barks: Woof! Woof!");
}

int main(void)
{
    Animal *my_pet;
    Dog *dog;
    puts("--- Without Virtual Keyword ---");
    dog = malloc(sizeof *dog);
    if (dog == NULL) {
        return 1;
    }
    dog->base.speak = dog_speak;
    my_pet = &dog->base;
    my_pet->speak(my_pet);
    free(dog);
    return 0;
}
