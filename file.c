#include <stdio.h>
#include <string.h>
int main()
{
    FILE *file;
    char name[50];
    int age;
    int salary;
    file = fopen("emp.txt", "w");
    if (file == NULL)
    {
        printf("File Does Not Exist!");
    }
    else
    {
        printf("\nFile Opened! \n");
        printf("Enter Name: \n");
        scanf("%[^\n]%*c", &name);
        fprintf(file, "Name: %s \n", name);
        printf("Enter Age: \n");
        scanf("%d", &age);
        fprintf(file, "Age: %d \n", age);
        printf("Enter salary: \n");
        scanf("%d", &salary);
        fprintf(file, "Salary: \n\n", salary);
    }
    fclose(file);
    printf("Data succesfully written \n");
    printf("File is now closed\n");

    return 0;
}