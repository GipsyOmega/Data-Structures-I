#include <iostream>
using namespace std;

int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
int main()
{
    int a, b, c;
    cin >> a >> b;
    int (*ptr)(int, int);
    ptr = max;
    c = (*ptr)(a, b);
    cout << &c;
    return 0;
}