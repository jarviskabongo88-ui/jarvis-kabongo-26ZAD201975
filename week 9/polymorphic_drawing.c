#include <stdio.h>
#include <stdlib.h>

typedef struct Shape Shape;

struct Shape {
    void (*draw)(const Shape *shape);
};

typedef struct {
    Shape base;
} Circle;

typedef struct {
    Shape base;
} Rectangle;

typedef struct {
    Shape base;
} Triangle;

static void circle_draw(const Shape *shape)
{
    (void)shape;
    puts("Drawing a Circle ◯");
}

static void rectangle_draw(const Shape *shape)
{
    (void)shape;
    puts("Drawing a Rectangle ▭");
}

static void triangle_draw(const Shape *shape)
{
    (void)shape;
    puts("Drawing a Triangle △");
}

static void render_canvas(const Shape *shape)
{
    shape->draw(shape);
}

int main(void)
{
    Shape *canvas[4];
    Circle *circle1 = malloc(sizeof *circle1);
    Rectangle *rectangle = malloc(sizeof *rectangle);
    Triangle *triangle = malloc(sizeof *triangle);
    Circle *circle2 = malloc(sizeof *circle2);
    size_t i;

    if (circle1 == NULL || rectangle == NULL || triangle == NULL ||
        circle2 == NULL) {
        free(circle1);
        free(rectangle);
        free(triangle);
        free(circle2);
        return 1;
    }

    circle1->base.draw = circle_draw;
    rectangle->base.draw = rectangle_draw;
    triangle->base.draw = triangle_draw;
    circle2->base.draw = circle_draw;
    canvas[0] = &circle1->base;
    canvas[1] = &rectangle->base;
    canvas[2] = &triangle->base;
    canvas[3] = &circle2->base;

    puts("--- Rendering Canvas ---");
    for (i = 0; i < sizeof canvas / sizeof canvas[0]; i++) {
        render_canvas(canvas[i]);
    }

    puts("\n--- Cleaning Up Memory ---");
    free(circle1);
    free(rectangle);
    free(triangle);
    free(circle2);
    return 0;
}
