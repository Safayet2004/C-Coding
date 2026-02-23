#include <iostream>

using namespace std;

int main()
{
    double a, b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    double result = (a+b)*(a-b);

    cout<<"("<<a<<"+"<<b<<")*("<<a<<"-"<<b<<")="<<result<<endl;

    return 0;
}
