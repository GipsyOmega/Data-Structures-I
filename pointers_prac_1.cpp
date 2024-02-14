#include <iostream>
using namespace std;

int *max(int &x, int &y)
{
    return x > y ? &x : &y;
}
void sum()
{
    int a[] = {1, 2, 3, 4, 5};
    int *arr = a;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            sum += *(arr + i);
            cout << *(arr + i) << "\t";
        }
    }
    cout << endl;
    cout << sum;
}

int main()
{
    int a, b, *c;
    cout << "Enter a:" << endl;
    cin >> a;
    cout << "Enter b:" << endl;
    cin >> b;
    c = max(a, b);
    cout << "Maximum is: ";
    cout << *c;
    return 0;
}
