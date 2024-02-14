#include <iostream>
using namespace std;
int func(int n)
{
    if (n > 0)
    {
        cout << n << "\t";
        func(n - 1);
        func(n - 1);
    }
    return 0;
}
int main()
{
    int x = 3;
    func(x);
    return 0;
}