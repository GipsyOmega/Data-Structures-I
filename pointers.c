#include <stdio.h>
#include <string.h>
int main()
{
    int n = 6;
    int m = 2;
    int *p = &n;
    int *q = &m;
    int b, c, d, e;
    printf("Address of p variable: %u \n", p);
    printf("Address of q variable: %u \n", q);
    int a = *p + *q;
    printf("Addition Operation: %u \n", a);
    b = (*p) - (*q);
    printf("Subtraction Operation: %u \n", b);
    c = (*p) * (*q);
    printf("Multiplication Operation: %u \n", c);
    d = (*p) / (*q);
    printf("Division Operation: %u \n", d);
    e = (*p) % (*q);
    printf("Modulus Operation: %u \n", e);

    // p = p - 1;
    // printf("Address of p variable after decrementing is %u \n",p);
    // return 0;
    return 0;
}