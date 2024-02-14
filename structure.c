#include <stdio.h>
#include <string.h>
struct student
{
    char name[50];
    int rollno;
    int marks;
};
int main()
{
    struct student s[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Information for student %d\n", i + 1);
        printf("Enter the name: \n", i + 1);
        scanf("%s", s[i].name);
        printf("Enter the rollno: \n");
        scanf("%d", &s[i].rollno);
        printf("Enter the marks: \n");
        scanf("%d", &s[i].marks);
        printf("\n");
    }
    for (int j = 0; j < 10; j++)
    {
        printf("Displaying information for student %d\n", j + 1);
        printf("Name: %s \n", s[j].name);
        printf("Rollno: %d \n", s[j].rollno);
        printf("Marks: %d \n", s[j].marks);
        printf("\n");
    }
    return 0;
}