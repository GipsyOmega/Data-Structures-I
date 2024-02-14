#include <iostream>
using namespace std;
struct person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    person *p1;
    p1 = new person;
    cout << "Enter Name:";
    cin >> p1->name;
    cout << "Enter Age: ";
    cin >> p1->age;
    cout << "Enter salary: ";
    cin >> p1->salary;
    cout << "Name: " << p1->name << endl;
    cout << "Age: " << p1->age << endl;
    cout << "Salary: " << p1->salary << endl;
    return 0;
}