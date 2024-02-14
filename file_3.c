#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp1, *fp2;
    char a;

    fp1 = fopen("input.txt", "r");
    if (fp1 == NULL)
    {
        puts("cannot open this file");
        exit(0);
    }

    fp2 = fopen("output.txt", "w");
    if (fp2 == NULL)
    {
        puts("Not able to open this file");
        fclose(fp1);
        exit(0);
    }

    do
    {
        a = fgetc(fp1);
        fputc(a, fp2);
    } while (a != EOF);
    printf("\n");
    printf("Contents Copied!");
    printf("\n");

    fclose(fp1);
    fclose(fp2);
    return 0;
}