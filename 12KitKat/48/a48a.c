#include <stdio.h>

#define PI 3.14
typedef struct _circle
{
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
    if(radius < 0){
        return 0;
    }
    return 1;
}

int circle_set_radius(CIRCLE *circle, double radius)
{
    if(circle_check_radius(radius) == 1){
        circle->radius = radius;
        return 1;
    }
    return 0;
}

int circle_new(CIRCLE *circle, double x, double y, double radius)
{
    circle->x = x;
    circle->y = y;
    if(circle_set_radius(circle, radius) == 1){
        return 1;
    }
    return 0;
}

void circle_print(const CIRCLE *circle)
{
    printf("Kreis an Position (%.1f, %.1f) mit Radius %.1f.\n", circle->x, circle->y, circle->radius);
}

double circle_calc_area(const CIRCLE *circle)
{
    return circle->radius * circle->radius * PI;
}