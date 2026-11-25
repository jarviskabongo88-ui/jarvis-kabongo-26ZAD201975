#include <stdio.h>

int main(void)
{
    FILE *my_file = fopen("missing_file.txt", "r");
    char data[256] = "";

    puts("Attempting to read from missing file...");
    if (my_file != NULL) {
        (void)fscanf(my_file, "%255s", data);
        fclose(my_file);
    }

    printf("Data read: %s\n", data);
    puts("Program continued running without crashing.");
    return 0;
}
