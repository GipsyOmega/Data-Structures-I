#include <iostream>
using namespace std;
class Diagonal
{
    int n;
    int *A;

public:
    Diagonal(int n);
    void create();
    int get(int i, int j);
    void set(int i, int j, int k);
    void display();
    ~Diagonal();
};
Diagonal::Diagonal(int n)
{
    this->n = n; // accessing a private variable of the object
    A = new int[n];
}
void Diagonal::create()
{
    int a;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cin >> a;
            if (i == j)
                A[i - 1] = a;
        }
    }
}
void Diagonal::display()
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (i == j)
                cout << A[i - 1] << "\t";
            else
                cout << 0 << "\t";
        }
    }
}
Diagonal::~Diagonal()
{
    delete[] A;
}
int main()
{
    int n;
    Diagonal d;
    return 0;
}