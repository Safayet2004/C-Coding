#include <iostream>

using namespace std;

int main()
{
    string address;

    cout << "Enter your address here: ";
    getline(cin, address);

    cout << "Your address is: " << address << endl;

    return 0;
}
