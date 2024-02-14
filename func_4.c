#include<stdio.h>
int sum()
{
    int sum;
    int a,b;
    printf("Enter two numbers (for Addition) :\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    return sum;
}
int diff()
{
    int diff;
    int a,b;
    printf("Enter two numbers (for Subtraction) :\n");
    scanf("%d %d",&a,&b);
    diff=a-b;
    return diff;
}
int mul()
{
    int mul;
    int a,b;
    printf("Enter two numbers (for Multiplication) :\n");
    scanf("%d %d",&a,&b);
    mul=a*b;
    return mul;
}
float div()
{
    float div;
    float a,b;
    printf("Enter two numbers (for Division) :\n");
    scanf("%f %f",&a,&b);
    div=a/b;
    return div;
}
int main()
{
    int a,b,c;
    float d;
    a=sum();
    b=diff();
    c=mul();
    d=div();
    printf("Addition : %d\n",a);
    printf("Subtraction : %d\n",b);
    printf("Multiplication : %d\n",c);
    printf("Division: %0.2f\n",d);

    return 0;
}

