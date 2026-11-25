#include <stdio.h>

static const double PI = 3.14159;

static double area_of_circle(double radius)
{
    if (radius < 0) {
        puts("Error: Radius cannot be negative.");
        return 0.0;
    }
    return PI * radius * radius;
}

static double area_of_rectangle(double length, double width)
{
    if (length < 0 || width < 0) {
        puts("Error: Length and width cannot be negative.");
        return 0.0;
    }
    return length * width;
}

static double area_of_triangle(double base, double height)
{
    if (base < 0 || height < 0) {
        puts("Error: Base and height cannot be negative.");
        return 0.0;
    }
    return 0.5 * base * height;
}

static void display_menu(void)
{
    puts("\n===== GEOMETRY CALCULATOR =====");
    puts("1. Area of Circle");
    puts("2. Area of Rectangle");
    puts("3. Area of Triangle");
    puts("4. Exit");
    printf("Enter your choice: ");
}

int main(void)
{
    int choice;
    double radius, length, width, base, height, area;
    do {
        display_menu();
        if (scanf("%d", &choice) != 1) {
            return 1;
        }
        switch (choice) {
        case 1:
            printf("Enter radius: ");
            if (scanf("%lf", &radius) != 1) return 1;
            area = area_of_circle(radius);
            printf("Area of circle: %.2f\n", area);
            break;
        case 2:
            printf("Enter length: ");
            if (scanf("%lf", &length) != 1) return 1;
            printf("Enter width: ");
            if (scanf("%lf", &width) != 1) return 1;
            area = area_of_rectangle(length, width);
            printf("Area of rectangle: %.2f\n", area);
            break;
        case 3:
            printf("Enter base: ");
            if (scanf("%lf", &base) != 1) return 1;
            printf("Enter height: ");
            if (scanf("%lf", &height) != 1) return 1;
            area = area_of_triangle(base, height);
            printf("Area of triangle: %.2f\n", area);
            break;
        case 4:
            puts("Goodbye!");
            break;
        default:
            puts("Invalid choice. Please try again.");
        }
    } while (choice != 4);
    return 0;
}
