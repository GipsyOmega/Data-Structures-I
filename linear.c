#include<stdio.h>
int main()
{
    int n,ele;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array:\n");
    for (int i=0;i<n;i++)
    {
        printf("\nEnter the %dth element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the value to be searched: ");
    scanf("%d",&ele);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(ele==arr[i])
        {
            printf("Element %d found at %dth index:\n",ele,i);
        }
    }

    return 0;
}

