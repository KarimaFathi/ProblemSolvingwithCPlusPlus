#include <iostream>
using namespace std;

int readPositiveNumber(string message) {
	int num;
	do {
		cout << message;
		cin >> num;
	} while (num < 0);
	return num;
}

float calculateTotalBillWithTaxAndService(float bill) {
	return bill * 1.10 * 1.16;
}


int main()
{
	float bill = readPositiveNumber("Please enter your bill.\n");
	cout << calculateTotalBillWithTaxAndService(bill);
}