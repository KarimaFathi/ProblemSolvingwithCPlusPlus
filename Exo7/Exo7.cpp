#include <iostream>
#include <string>
using namespace std;

int readnumber() {
	int number;
		cout << "Please enter a number.\n";
		cin >> number;
		return number;
}

float CalculateHalf(int number) {
	return (float) number / 2;
}

void printNumber(int number) {
	string result = "Half of " +  to_string(number) + " is " + to_string(CalculateHalf(number));
	cout << result << endl;
}

int main()
{
	printNumber(readnumber());
}


