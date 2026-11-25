#include <stdio.h>

int main(void)
{
    FILE *input_file = fopen("numbers.txt", "r");
    int num;
    int sum = 0;
    if (input_file == NULL) {
        puts("Error: Could not open numbers.txt for reading!");
        return 1;
    }

    puts("Reading numbers from file...");
    while (fscanf(input_file, "%d", &num) == 1) {
        printf("Read: %d\n", num);
        sum += num;
    }
    fclose(input_file);

    printf("Total Sum: %d\n", sum);
    FILE *output_file = fopen("sum.txt", "w");
    if (output_file == NULL) {
        puts("Error: Could not create sum.txt for writing!");
        return 1;
    }
    fprintf(output_file, "The total sum is: %d\n", sum);
    fputs("Calculated automatically by the C++ program.\n", output_file);
    fclose(output_file);
    puts("Result successfully saved to sum.txt!");
    return 0;
}
