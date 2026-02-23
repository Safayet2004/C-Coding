#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;

    cout << "Sum is: " << sum << endl;
    cout << "Difference is: " << difference << endl;
    cout << "Product is: " << product << endl;

    if (num2 != 0) {
        double quotient = num1 / num2;
        cout << "Quotient is: " << quotient << endl;
    } else {
        cout << "Can't divide by zero!" << endl;
    }

    return 0;
}
