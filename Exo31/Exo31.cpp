#include <iostream>
using namespace std;



int readNumber() {
    int number;
    cout << "Please enter a number.\n";
    cin >> number;
    return number;
}

void calculatePowerOf2_3_4(int number) {
    int a = pow(number, 2);
    int b = pow(number, 3);
    int c = pow(number, 4);
    cout << a << " " << b << " " << c << endl;
}


int main()
{
    calculatePowerOf2_3_4(readNumber());
    return 0;
}



