#include <iostream>
using namespace std;

int readPositiveNumber(string message)  {
	int num;
	do {
		cout << message;
		cin >> num;
	} while (num < 0);
	return num;
	
}

float calculateRemainder(float totalBill, float cashPaid) {
	float remainder = totalBill - cashPaid;
	return remainder;
}


int main()
{
	float totalBill = readPositiveNumber("Please enter your total bill.\n");
	float cashPaid  = readPositiveNumber("Please enter your cash paid.\n");
	cout << "The remainder is " << calculateRemainder(totalBill, cashPaid);
}
