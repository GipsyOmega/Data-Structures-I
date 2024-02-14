#include <stdio.h>
int main() {  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    printf("ASCII value of %c is :%d \n", c, c);
   
    int a;
    float f;
    double d;

    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of float: %zu bytes\n", sizeof(f));
    printf("Size of char: %zu byte\n", sizeof(c));
    printf("Size of double: %zu bytes\n", sizeof(d));
    
    return 0;
}