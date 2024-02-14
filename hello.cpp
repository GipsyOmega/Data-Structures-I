#include<iostream>
using namespace std;
int add(int num1,int num2);
int main()
{
int a,b,sum;
cout<<"Enter two numbers: "<<endl;
cin>>a>>b;
sum=add(a,b);
cout<<"Sum : "<<sum<<endl;

return 0;
}
int add(int n1, int n2)
{
        int sum;
        sum=n1+n2;
        return sum;
}

