#include <stdio.h>
#include <string.h>

typedef struct {
    char color[100];
} Shape;

typedef struct {
    Shape base;
    double radius;
} Circle;

typedef struct {
    Shape base;
    double width;
    double height;
} Rectangle;

static void shape_init(Shape *shape, const char *color)
{
    (void)snprintf(shape->color, sizeof shape->color, "%s", color);
    puts("Shape constructor called.");
}

static void shape_display_color(const Shape *shape)
{
    printf("This shape's color is: %s\n", shape->color);
}

static void circle_init(Circle *circle, const char *color, double radius)
{
    shape_init(&circle->base, color);
    circle->radius = radius;
    puts("Circle constructor called.");
}

static void circle_display_info(const Circle *circle)
{
    printf("This circle is %s and has a radius of %.0f\n",
           circle->base.color, circle->radius);
}

static void rectangle_init(Rectangle *rectangle, const char *color,
                          double width, double height)
{
    shape_init(&rectangle->base, color);
    rectangle->width = width;
    rectangle->height = height;
    puts("Rectangle constructor called.");
}

static void rectangle_display_info(const Rectangle *rectangle)
{
    printf("This rectangle is %s and is %.0fx%.0f\n",
           rectangle->base.color, rectangle->width, rectangle->height);
}

int main(void)
{
    Circle my_circle;
    Rectangle my_rect;

    puts("--- Creating a Circle ---");
    circle_init(&my_circle, "Red", 5.0);
    shape_display_color(&my_circle.base);
    circle_display_info(&my_circle);

    puts("\n--- Creating a Rectangle ---");
    rectangle_init(&my_rect, "Blue", 4.0, 6.0);
    shape_display_color(&my_rect.base);
    rectangle_display_info(&my_rect);
    return 0;
}
