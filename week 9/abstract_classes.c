#include <stdio.h>

typedef struct {
    double side;
} Square;

typedef struct {
    double radius;
} Circle;

static double square_calculate_area(const Square *square)
{
    return square->side * square->side;
}

static double circle_calculate_area(const Circle *circle)
{
    return 3.14159 * circle->radius * circle->radius;
}

int main(void)
{
    Square square = {5.0};
    Circle circle = {3.0};
    printf("Area of Square: %.0f\n", square_calculate_area(&square));
    printf("Area of Circle: %.6g\n", circle_calculate_area(&circle));
    return 0;
}
