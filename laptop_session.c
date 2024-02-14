#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    printf("Menu-Driven Program \n");
    printf("Press 1 for Avg Height Calculation: \n");
    printf("Press 2 for Avg Weight Calculation: \n");
    printf("Press 3 for Male Female Ratio Calculation:\n");
    printf("Press 4 for exit\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        {
        int j;
        int avg_height=0;
        for(int i=0;i<10;i++)
        {
            printf("Enter height %d : \n",i+1);
            scanf(" %d",&j);
            avg_height=avg_height+j;
        }
        avg_height/=10;
        printf("The Average Height is: %d\n",avg_height);
        break;
        }

        case 2:
        {
        int j;
        int avg_weight=0;
        for(int i=0;i<10;i++)
        {
            printf("Enter weight %d :\n",i+1);
            scanf("%d",&j);
            avg_weight=avg_weight+j;
        }
        avg_weight/=10;
        printf("The Average Weight is: %d \n",avg_weight);
        break;
        }

        case 3:
        {
        char c;
        int m=0;
        int f=0;
        
        for(int k=0;k<10;k++)
        {
            printf("Enter the gender m/f %d:\n",k+1);
            scanf(" %c",&c);
            if(c=='m')
            {
                m=m+1;
            }
            else
            {
                f+=1;
            }

        }
        
        printf("The Male Female Ratio is: %d : %d \n",m,f);
        break;
        }

        case 4:
        exit(0);
        break;

        default:
        printf("Invalid Input \n");
        break;
    }
    return 0;
}