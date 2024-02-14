#include <iostream>

using namespace std;
void primeset(int n)
{
    int prime[100];
    for(int i=0;i<100;i++)
    {
        prime[i]=0;
    }
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=(i*i);j<=n;j=j+i)
            {
                prime[j]=1;
            }
        }
    }

for(int i=2;i<=n;i++)
{
    if(prime[i]==0)
    {
        cout<<i<<" ";
    }
}
}

int main()
{
    int n;
    cin>>n;
    primeset(n);

    return 0;
}