#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    double numbers[n];
    double sum = 0.0;

    cout << "Enter 5 numbers: " << endl;
    for(int i=0; i<n; i++){
        cin >> numbers[i];
        sum += numbers[i];
    }

    double average = sum/n;
    cout << "The average of the numbers is: " << average << endl;

    return 0;
}
