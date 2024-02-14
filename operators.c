#include<stdio.h>
int main()
{
    int a=10;
    int b=9;
    float f=1.2;
    int c;
    printf("Arithmetic Operations:");
    printf("a+b= %d \n",a+b);
    printf("a-b= %d \n",a-b);
    printf("a*b= %d \n",a*b);
    printf("a/b= %d \n",a/b);
    printf("a/b(Remainder)= %d \n",a%b);
    printf("\n");
    printf("Increment and Decrement:\n");
    a++;
    printf("a++ = %d \n",a);
    printf("a-- = %d \n",a--);
    printf("++f = %f \n",++f);
    printf("\n");
    printf("Assignment Operators:\n");
    c=a;
    printf("c=a %d \n",c);
    printf("c+=a %d \n",c+=a);
    printf("c-=a %d \n",c-=a);
    printf("c*=a %d \n",c*=a);
    printf("c/=a %d \n",c/=a);
    printf("c/=a(Remainder) %d \n",c%=a);

    return 0;
}
