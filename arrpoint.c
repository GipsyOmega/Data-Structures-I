#include <stdio.h>
#include <string.h>
int main()
{
    int i, n;
    printf("Enter any number: \n");
    scanf("%d", &n);
    printf("\n");
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *ptr[n];
    for (i = 0; i < n; i++)
    {
        ptr[i] = &arr[i];
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("Value of arr[%d] = %d\n", i, *ptr[i]);
    }
    return 0;
}