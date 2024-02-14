#include<stdio.h>
int main()
{
    printf("FIRST CASE: \n");
    int arr[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    float avg=sum/5;

    printf("Average: %0.2f \n",avg);
    int max=arr[0];
    for(int i=0;i<5;i++)
    {
        if(max<arr[i])
        { max=arr[i];}
    }
    printf("The highest score is: %d\n",max);
    printf("\n");

    printf("SECOND CASE: \n");
    int m1,m2,m3,m4,m5;
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    int add=m1+m2+m3+m4+m5;
    float average=sum/5;
    int brr[]={m1,m2,m3,m4,m5};
    int max_=brr[0];
    for(int i=0;i<5;i++)
    {
        if(max_<brr[i])
        { max_=brr[i];}
    }
    printf("The highest score is: %d\n",max_);
    printf("Average: %.2f \n",average);
    return 0;

}