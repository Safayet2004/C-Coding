#include <iostream>

using namespace std;

int main()
{
    int number;
    long factorial = 1;

    cout << "Enter a integer(negative not allowed): ";
    cin >> number;

    if (number<0){
        cout << "Factorial of negative number is not possible!" << endl;
    }else{
        int i=1;

        do{
            factorial*=i;
            i++;
        }while(i<=number);

        cout << "Factorial of " << number << " is: " << factorial << endl;
    }
    return 0;
}
