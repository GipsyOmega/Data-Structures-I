#include <iostream>
using namespace std;
//int y = 0;
int func(int n)
{
    static int y = 0;
    if (n > 0)
    {
        /* code */
        y++;
        return func(n - 1) + y;
        //cout << func(n - 1) << "\t";
    }
    return 0;
}
int main()
{
    int x = 8;
    cout << func(x) << endl;
    return 0;
}