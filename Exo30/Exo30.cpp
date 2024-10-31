#include <iostream>
using namespace std;

int readNumber() {
    int number;
    cout << "Please enter a positive number.\n";
    cin >> number;
    return number;
}

int readUntilPositive(){
    int number;
    do {
        number = readNumber();
    } while (number < 0);
    return number;
}

int calculateFactorial(int number) {
    int factorial = 1;
    if (number == 0) {
        factorial = 1;
        return factorial;
    }
    else {
        for (int i = number; i >= 1; i--) {
            factorial *= i;
        }
        return factorial;
    }
}

void printFactorialResult(int factorial) {
    cout << "The factorial of the given number is " << factorial << endl;
}


int main()
{
    printFactorialResult(calculateFactorial(readUntilPositive()));
    return 0;
    
}

