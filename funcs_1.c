#include<stdio.h>
int sum(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}
int diff(int a, int b)
{
    int diff;
    diff=a-b;
    return diff;
}
int mul(int a, int b)
{
    int mul;
    mul=a*b;
    return mul;
}
float div(int a, int b)
{
    float div;
    div=a/b;
    return div;
}
int main()
{
    int s,d,m;
    int a,b;
    float f;
    printf("Enter two numbers :\n");
    scanf("%d %d",&a,&b);
    s=sum(a,b);
    d=diff(a,b);
    m=mul(a,b);
    f=div(a,b);
    printf("Addition : %d\n",s);
    printf("Subtraction : %d\n",d);
    printf("Multiplication : %d\n",m);
    printf("Division: %0.2f\n",f);

    return 0;
}

