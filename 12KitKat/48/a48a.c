#include <stdio.h>

#define PI 3.14
typedef struct _circle {
    double x;
    double y;
    double radius;
} CIRCLE;

double circle_get_x(const CIRCLE *circle)
{
    return circle->x;
}

int circle_check_radius(double radius)
{
    return (radius > 0) ? 1 : 0;
}

int circle_set_radius(CIRCLE *circle, double radius)
{
    if(circle_check_radius(radius)) {
        circle->radius = radius;
        return 1;
    } else {
        return 0;
    }
}

int circle_new(CIRCLE *circle, double x, double y, double radius)
{
    if(!circle_set_radius(circle, radius)) return 0;
    circle->x = x;
    circle->y = y;
    return 1;
}

void circle_print(const CIRCLE *circle)
{
    printf("Kreis an Position (%.1f, %.1f) mit Radius %.2f",
            circle->x, circle->y, circle->radius);
}

double circle_calc_area(const CIRCLE *circle)
{
    return circle->radius * circle->radius * PI;
}
