#include <iostream>
using namespace std;
// void show(*arr, int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[i][j] << "\t";
//         }
//         cout << endl;
//     }
// };

int main()
{
    int n;
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (abs(i - j) <= 1)
            {
                cin >> matrix[i][j];
            }
            else
                matrix[i][j] = 0;
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}