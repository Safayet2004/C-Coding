#include <iostream>

using namespace std;

int main()
{
    cout << "Even numbers between 1 to 50 are: " << endl;

    for (int i = 1; i<=50; i++){
        if (i%2==0){
            cout << i << " ";
        }
    }

    return 0;
}
