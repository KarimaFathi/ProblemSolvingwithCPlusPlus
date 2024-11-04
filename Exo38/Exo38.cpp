#include <iostream>
using namespace std;

// we can use enum here too as another option.
int readPositiveNumber() {
    int number;
    do {
        cout << "Please enter a positive number.\n";
        cin >> number;
    } while (number < 0);
    return number;
}


string isPrime(int num) {

    for (int i = 2; i <= round(num / 2); i++) {
        if (num % i == 0) {
            return "not Prime";
        }
    }
    return "Prime";
}

int main()
{
    cout << "This number is " << isPrime(readPositiveNumber());
    return 0;
}