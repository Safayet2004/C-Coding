#include <iostream>
using namespace std;


void inputTemp(float temp[], int day){
    cout << "Temperatures for 5 days: " << endl;

    for(int i=0; i<day; i++){
        cin >> temp[i];
    }
}

float calcSum(float temp[], int day){
    float sum=0;

    for(int i=0; i<day; i++){
        sum+=temp[i];
    }
    return sum;
}

float calcAverage(float sum, int day){
    return sum/day;
}


int main()
{
    float temp[5], sum=0, avrg;

    inputTemp(temp,5);

    sum = calcSum(temp,5);
    avrg = calcAverage(sum,5);

    cout << "Total Temperature: " << sum << endl;
    cout << "Average Temperature: " << avrg << endl;

    if(avrg > 30)
        cout << "Hot Weather" << endl;
    else
        cout << "Normal Weather" << endl;

    return 0;
}
