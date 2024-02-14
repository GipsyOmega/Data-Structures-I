#include <stdio.h>
#include <string.h>
struct employee
{
    char employee_name[50];
    char department[10];
    long salary;
    int rating;
};
void get_data(struct employee e[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("Enter Employee Name: \n");
        scanf("%s", &e[i].employee_name);
        printf("Enter Department (HR,TECH,SERVICE): \n");
        scanf("%s", &e[i].department);
        printf("Enter Salary: \n");
        scanf("%ld", &e[i].salary);
        printf("Enter Rating (1-5): \n");
        scanf("%d", &e[i].rating);
        printf("\n");
    }
}
void update(struct employee e[])
{
    for (int i = 0; i < 10; i++)
    {
        if (e[i].rating >= 3)
        {
            e[i].salary = e[i].salary + 0.1 * e[i].salary;
        }
        else
        {
            e[i].salary = e[i].salary + 0.07 * e[i].salary;
        }
    }
}
void show_data(struct employee e[])
{
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(e[i].department, "HR") == 0)
        {
            printf("Enter Employee Name: %s\n", e[i].employee_name);
            printf("Enter Department: %s\n", e[i].department);
            printf("Enter Salary: %ld\n", e[i].salary);
            printf("Enter Rating (1-5): %d\n", e[i].rating);
            printf("\n");
        }
    }
}
void count(struct employee e[])
{
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(e[i].department, "HR") == 0)
        {
            count++;
        }
    }
    printf("Number of employees in the HR Department are: %d\n", count);
}
int main()
{
    struct employee e[10];
    get_data(e);
    update(e);
    show_data(e);
    count(e);

    return 0;
}