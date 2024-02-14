#include<stdio.h>
int main()
{   
    printf("CASE 1: USING ONE VARIABLE \n");
    int m;
    int sum=0;
    int max=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&m);
        sum+=m;
        if(max<m)
        {max=m;}
    }
    float avg=sum/5;
    printf("Average : %0.2f\n",avg);
    printf("The highest score is: %d\n",max);

    printf("CASE 2: USING 5 VARIABLES \n");
    int m1,m2,m3,m4,m5;
    int maxi=0;
    scanf("%d",&m1);
    if(maxi<m1)
    {
        maxi=m1;
    }
    scanf("%d",&m2);
    if(maxi<m2)
    {
        maxi=m2;
    }
    scanf("%d",&m3);
    if(maxi<m3)
    {
        maxi=m3;
    }
    scanf("%d",&m4);
    if(maxi<m4)
    {
        maxi=m4;
    }
    scanf("%d",&m5);
    if(maxi<m5)
    {
        maxi=m5;
    }
    int add=m1+m2+m3+m4+m5;
    float average=sum/5;
    printf("Average : %0.2f\n",average);
    printf("The highest score is: %d\n",maxi);
    
    return 0;
}