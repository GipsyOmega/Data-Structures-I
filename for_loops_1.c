#include<stdio.h>
int main()
{
    for(int i=0;i<10;i++)
    {
        printf("%d ",i+1);
    }
    printf("\n");
    printf("\n");
    
    for(int i=0;i<10;i++)
    {   
        if(i%2==0)
        printf("%d %d \n",i+1,i+2);
    }
    printf("\n");
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf(" ");
        }
        printf("%d \n",i+1);
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}