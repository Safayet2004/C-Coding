#include <iostream>

using namespace std;

int main()
{
    double markPHY, markCHEM, markMATH;

    cout << "Enter marks for physics: ";
    cin >> markPHY;
    cout << "Enter marks for chemistry: ";
    cin >> markCHEM;
    cout << "Enter marks for mathematics: ";
    cin >> markMATH;

    double average = (markPHY+markCHEM+markMATH)/3;

    cout << "The average marks are: " << average << endl;

    return 0;
}
