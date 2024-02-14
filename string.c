#include <stdio.h>
#include <string.h>
void length(char *str)
{
    printf("Length of the string: %lu\n", strlen(str));
}
void stringcopy(char *str1)
{
    char str2[50];
    int i = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    printf("Copied String: %s\n", str2);
}
int main()
{
    char str1[50];
    printf("Enter String 1:\n");
    scanf("%s", str1);
    length(str1);
    stringcopy(str1);

    return 0;
}