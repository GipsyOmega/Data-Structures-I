#include <iostream>
using namespace std;
// Class Employee
class employee
{
private:
    int n;
    float *ptr;
    float total;

public:
    employee();
    void display();
};
employee::employee()
{
    cout << "Enter the number of employees" << endl;
    cin >> n;
    ptr = new float[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter salary for the " << i << "th employee: ";
        cin >> *(ptr + i);
    }
    delete[] ptr;
}
void employee::display()
{
    for (int j; j < n; j++)
    {
        cout << "Salary for Employee " << j << ": ";
        cout << *(ptr + j);
    }
}
int main()
{
    employee e;
    e.display();
    return 0;
}