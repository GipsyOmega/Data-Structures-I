#include <stdio.h>
#include <string.h>
void circle(int a)
{
    float area;
    area = 3.14 * a * a;
    printf("Area of the circle: %0.2f \n", area);
}
void rectangle(int a, int b)
{
    float area;
    area = a * b;
    printf("Area of the Rectangle: %0.2f \n", area);
}
void square(int a)
{
    float area;
    area = a * a;
    printf("Area of the Square: %0.2f \n", area);
}
void triangle(int a, int b)
{
    float area;
    area = 0.5 * a * b;
    printf("Area of the triangle: %0.2f \n", area);
}
int main()
{
    int radius;
    int s, l, b;
    printf("Enter the radius:\n");
    scanf("%d", &radius);
    printf("Enter the length:\n");
    scanf("%d", &l);
    printf("Enter the breadth:\n");
    scanf("%d", &b);
    printf("Enter the side of a square:\n");
    scanf("%d", &s);
    circle(radius);
    rectangle(l, b);
    square(s);
    triangle(l, b);
    return 0;
}