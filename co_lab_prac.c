#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a: \n");
    scanf(" %d",&a);
    printf("Enter the value of b: \n");
    scanf(" %d",&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Value of a: %d\n",a);
    printf("Value of b: %d\n",b);
    printf("Sum of the two numbers: %d\n",a+b);

    return 0;

}