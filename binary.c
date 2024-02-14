#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    int beg,mid,last,ele;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array:\n");
    for (int i=0;i<n;i++)
    {
        printf("\nEnter the %dth element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    beg=0;
    last=n-1;
    printf("Enter the value to be searched: ");
    scanf("%d",&ele);
    printf("\n");
    while(beg<=last)
    {
        mid=(beg+last)/2;
        if(ele>arr[mid])
        {
            beg=mid+1;
        }
        else if(ele<arr[mid])
        {
            last=mid-1;
        }
        else if(ele==arr[mid])
        {
            printf("Element %d found at %dth index \n",ele,mid);
            break;
        }
        else
        {
            printf("Element not found in the array!");
        }
        
    }
    
    return 0;
}