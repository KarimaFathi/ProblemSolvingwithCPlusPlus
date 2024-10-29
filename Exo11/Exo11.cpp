#include <iostream>
using namespace std;

enum enPassFail {pass = 1, fail = 0};
void readNumbers(int arr[3]) {
    for (int i = 0; i < 3; i++) {
        cout << "Please enter the number " << i + 1 << endl;
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

float averageOfNumbers(int arr[3]) {
    return (float)sumNumbers(arr) / 3;
}

void printAverage(float average) {
    cout << "the average of the 3 numbers is " << average << endl;
}

enPassFail checkAverage(float average) {
    if (average >= 50)
        return enPassFail::pass;
    else return enPassFail::fail;
}

void printResult(float average) {
    if (checkAverage(average) == enPassFail::pass)
        cout << "You passed\n";
    else cout << "You failed\n";
}

int main()
{
    int arr[3];
    readNumbers(arr);
    printAverage(averageOfNumbers(arr));
    printResult(averageOfNumbers(arr));
    return 0;

}