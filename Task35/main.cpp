#include <iostream>
using namespace std;

void inputNum(int arr[], int size){
    cout << "Enter 10 numbers: " << endl;
    for (int i=0; i<size; i++){
        cin >> arr[i];
    }
}

int MultipleOf5(int arr[], int size){
    int count=0;

    for(int i=0; i<size; i++){
        if(arr[i]%5==0)
            count++;
    }
    return count;
}

int Smallest(int arr[], int size){
    int smallest = arr[0];

    for(int i=0; i<size; i++){
        if(arr[i]<smallest)
            smallest = arr[i];
    }
    return smallest;
}

int calcSum(int arr[], int size){
    int sum=0;

    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    int arr[10];

    inputNum(arr,10);

    int multiple = MultipleOf5(arr,10);

    int smallest = Smallest(arr,10);
    int sum = calcSum(arr,10);

    cout << "Multiples of 5: " << multiple << endl;
    cout << "Smallest number: " << smallest << endl;
    cout << "Sum of all numbers: " << sum << endl;

    return 0;
}
