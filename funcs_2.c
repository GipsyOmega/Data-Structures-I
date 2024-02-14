#include<stdio.h>
void sum(int a, int b)
{
    int sum;
    sum=a+b;
    printf("Addition : %d\n",sum);
}
void diff(int a, int b)
{
    int diff;
    diff=a-b;
    printf("Subtraction : %d\n",diff);
}
void mul(int a, int b)
{
    int mul;
    mul=a*b;
    printf("Multiplication : %d\n",mul);
}
void div(int a, int b)
{
    float div;
    div=a/b;
    printf("Division: %0.2f\n",div);
}
int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    sum(a,b);
    diff(a,b);
    mul(a,b);
    div(a,b);
    return 0;
}


