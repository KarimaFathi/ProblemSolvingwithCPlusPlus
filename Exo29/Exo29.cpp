#include <iostream>
using namespace std;

enum enOddEven { odd = 1, even = 2 };

int readNumber() {
    int number;
    cout << "Please enter a number.\n";
    cin >> number;
    return number;
}

enOddEven checkOddOrEven(int number) {
    if (number % 2 == 0) {
        return enOddEven::even;
    }
    else return enOddEven::odd;
}



int sumEvenNumbersUsing_For(int number) {
    int sum = 0;
    for (int i = 1; i <= number; i = i++) {
        if (checkOddOrEven(i) == enOddEven::odd) {
            sum += i;
        }
    }
    return sum;
}

int sumEvenNumbersUsing_While(int number) {
    int sum = 0, i = 1;
    while (i <= number) {
        if (checkOddOrEven(i) == enOddEven::even) {
            sum += i;
        }
        i++;
    }
    return sum;
}

int sumEvenNumbersUsing_DoWhile(int number) {
    int sum = 0, i = 1;
    do {
        if (checkOddOrEven(i) == enOddEven::even) {
            sum += i;
        }
        i++;
    } while (i <= number);
    return sum;
}

void printSum(int sum) {
    cout << endl << "The sum of even numbers is " << sum << endl;
}

int main()
{
    //printSum(sumEvenNumbersUsing_For(readNumber()));
    //printSum(sumEvenNumbersUsing_While(readNumber()));
    printSum(sumEvenNumbersUsing_DoWhile(readNumber()));
    return 0;
}

