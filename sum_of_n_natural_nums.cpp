#include <iostream>
using namespace std;
int sum1(int n)
{
    if (n > 0)
    {
        return sum1(n - 1) + n;
    }
    return 0;
}
int sum2(int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += i;
    }
    return s;
}
int main()
{
    int x = 3;
    cout << sum1(x);
    return 0;
}