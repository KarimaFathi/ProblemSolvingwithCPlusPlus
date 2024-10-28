#include <iostream>
using namespace std;

enum enNumberType { odd = 1, even = 2 };
int readNumber() {
    int num;
    cout << "Please enter a number.\n";
    cin >> num;
    return num;
}

enNumberType isOddOrEven(int num) {
    if (num % 2 == 0) {
        return enNumberType::even;
    }
    else return enNumberType::odd;
}


void printNumberType(enNumberType numberType) {
    if (numberType == enNumberType::even) {
        cout << "the number is even\n";
    }
    else cout << "the number is odd\n";
}

int main()
{
    printNumberType(isOddOrEven(readNumber()));
   
}


