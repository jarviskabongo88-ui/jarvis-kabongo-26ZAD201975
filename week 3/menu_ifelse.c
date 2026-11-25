#include <stdio.h>

int main(void)
{
    int choice;
    printf("Menu:\n1.start\n\n2.Load\n\n3.Settings\n\n4.Exit\n\nChoice: ");
    if (scanf("%d", &choice) != 1) {
        return 1;
    }
    if (choice == 1) {
        puts("Starting the game...");
    } else if (choice == 2) {
        puts("Loading the game...");
    } else if (choice == 3) {
        puts("Opening settings...");
    } else if (choice == 4) {
        puts("Exiting...\n");
    } else {
        puts("Invalid choice!");
    }
    return 0;
}
