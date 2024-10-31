#include <iostream>
using namespace std;

enum enOddEven {odd = 1, even = 2};

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



int sumOddNumbersUsing_For(int number) {
    int sum = 0;
    for (int i = 0; i < number; i = i++) {
    if (checkOddOrEven(i) == enOddEven::odd) {
            sum += i;
        }
    }
    return sum;
}

int sumOddNumbersUsing_While(int number) {
    int sum = 0, i = 0;
    while (i < number ){
        if (checkOddOrEven(i) == enOddEven::odd) {
            sum += i;
        }
        i++;
    }
    return sum;
}

int sumOddNumbersUsing_DoWhile(int number) {
    int sum = 0, i = 0;
    do{
        if (checkOddOrEven(i) == enOddEven::odd) {
            sum += i;
        }
        i++;
    } while (i < number);
    return sum;
}

void printSum(int sum) {
    cout << endl << "The sum of odd numbers is " << sum << endl;
}

int main()
{
    //printSum(sumOddNumbersUsing_For(readNumber()));
    //printSum(sumOddNumbersUsing_While(readNumber()));
    printSum(sumOddNumbersUsing_DoWhile(readNumber()));
    return 0;
}

