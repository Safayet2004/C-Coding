#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter a number: " << endl;
    cin >> number;

    if (number>100 && number%2==0){
        cout << "The number is greater than 100 and even." << endl;
    }else{
        cout << "The number is not greater than 100 and even." << endl;
    }


    return 0;
}
