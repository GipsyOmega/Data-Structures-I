#include <stdio.h>
#include <string.h>
void sum(int *arr, int a)
{
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum += arr[i];
    }
    printf("Sum of the array: %d\n", sum);
}
int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    sum(arr, n);
    return 0;
}