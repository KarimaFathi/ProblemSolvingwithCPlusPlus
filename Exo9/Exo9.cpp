#include <iostream>
using namespace std;

void readNumbers(int arr[3]) {
    for (int i = 0; i < 3; i++) {
        cout << "Please enter a number\n";
            cin >> arr[i];
    }
}

int sumNumbers(int arr[3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += arr[i];
    }
    return sum;
}

void printSum(int sum) {
    cout << "the sum of the 3 numbers is " << sum << endl;
}

int main()
{
    int arr[3];
    readNumbers(arr);
    printSum(sumNumbers(arr));
}

