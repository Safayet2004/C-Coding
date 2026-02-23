#include<iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int x, y;

    cout << "Enter two numbers: " << endl;
    cin >> x >> y;

    cout << "Sum of given two numbers is: " << sum(x,y) << endl;

    return 0;
}
