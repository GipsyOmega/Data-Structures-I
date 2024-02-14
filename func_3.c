#include<stdio.h>
void sum()
{
    int sum;
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Addition : %d\n",sum);
}
void diff()
{
    int diff;
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    diff=a-b;
    printf("Subtraction : %d\n",diff);
}
void mul()
{
    int mul;
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    mul=a*b;
    printf("Multiplication : %d\n",mul);
}
void div()
{
    float div;
    float a,b;
    printf("Enter two numbers:\n");
    scanf("%f %f",&a,&b);
    div=a/b;
    printf("Division: %0.2f\n",div);
}
int main()
{
    sum();
    diff();
    mul();
    div();
    return 0;
}

