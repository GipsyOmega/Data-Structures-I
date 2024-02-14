#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array:\n");
    for (int i=0;i<n;i++)
    {
        printf("\nEnter the %dth element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Array before sorting:\n");
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Array after sorting:\n");
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;

}