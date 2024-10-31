#include <iostream>
#include <cmath>
using namespace std;



void readInfo(int &number, int &exponent) {
    cout << "Please enter a number.\n";
    cin >> number;
    cout << "Please enter the exponent.\n";
    cin >> exponent;
}

int calculatePower(int number, int exponent)  {
    int p = 1;
    if (exponent == 0)
        return p;
    else {
        for (int i = 1; i <= exponent; i++) {
            p *= number;
        }
        return p;
    }
}


int main()
{
    int number, exponent;
    readInfo(number, exponent);
    cout << endl << "Result = " << calculatePower(number, exponent);
    return 0;
}
