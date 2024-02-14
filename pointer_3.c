#include <stdio.h>
#include <string.h>
int *avg(int *arr, int n)
{
    static int average = 0;
    for (int i = 0; i < n; i++)
    {
        average += arr[i];
    }
    average /= n;
    return (&average);
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
    int *p = avg(arr, n);
    printf("Average: %u\n", *p);
    return 0;
}