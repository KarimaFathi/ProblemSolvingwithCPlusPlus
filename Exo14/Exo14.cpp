
#include <iostream>
using namespace std;

void readTwoNumbers(int& num1, int& num2) {
    cout << "Please enter the first number\n";
    cin >> num1;
    cout << "Please enter the second number\n";
    cin >> num2;
}

void swapTwoNumbers(int &num1, int &num2) {
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void printResult(int num1, int num2) {
    cout << endl << num1 << endl;
    cout << num2;
    
}
int main()
{
    int num1, num2;
    readTwoNumbers(num1, num2);
    swapTwoNumbers(num1, num2);
    printResult(num1, num2);

}

