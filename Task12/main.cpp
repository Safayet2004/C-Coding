#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter the first integer: " << endl;
    cin >> num1;
    cout << "Enter the second integer: " << endl;
    cin >> num2;

    int bitwiseAND = num1 & num2;
    int bitwiseOR = num1 | num2;
    int bitwiseXOR = num1 ^ num2;

    cout << "Bitwise AND of " << num1 << " and " << num2 << " is: " << bitwiseAND << endl;
    cout << "Bitwise OR of " << num1 << " and " << num2 << " is: " << bitwiseOR << endl;
    cout << "Bitwise XOR of " << num1 << " and " << num2 << " is: " << bitwiseXOR << endl;


    return 0;
}
