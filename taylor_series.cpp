#include <iostream>
using namespace std;
double e(int x, int n)
{
    static double p = 1, f = 1;
    double result;
    if (n == 0)
        return 1;

    result = e(x, n - 1);
    p *= x;
    f *= n;
    return result + p / f;
}
double ex(int x, int n)
{
    static double sum = 1;
    if (n == 0)
        return sum;
    else
        sum = (1 + x * sum / n);
    return ex(x, n - 1);
}

int main()
{
    cout << e(5, 23) << endl;
    cout << ex(5, 23) << endl;
    return 0;
}