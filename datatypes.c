#include<stdio.h>
int main()
{
    int a = 10;
    float b = 20.02;
    char c = 'A';
    long d = 9818011192;
    float f = b * 2;
    printf("%0.2f %d %c %ld",b,a,c,d);   
    printf("\n");
    printf("%ld %c%c%c%c",d,c,c,c,c); 
    printf("\n");
    printf("%0.2f * 2 = %0.2f",b,f);

    return 0;
}
