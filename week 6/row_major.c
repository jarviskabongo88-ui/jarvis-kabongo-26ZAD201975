#include <stdio.h>

int main(void) {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printf("row-major traversal (row by row):\n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    printf("\nmemory address(each int takes 4 bytes):\n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            printf("matrix[%d][%d] = %p\n", row, col,
                   (void *)&matrix[row][col]);
            printf("at address: %p\n", (void *)&matrix[row][col]);
        }
    }

    printf("\nobservation: addresses increase row by row.\n");
    printf("row 0 is stored completely then row 1, then row 2.\n");
    printf("this is called ROW-MAJOR ORDER.\n");
    return 0;
}
