#include <iostream>
using namespace std;



float readPositiveNumber(string message) {
	float num;
	do {
		cout << message;
		cin >> num;
	} while (num < 0);
	return num;
}

float calculateTotalMonths(float loanAmount, float monthlyPayment) {
	float totalMonths = loanAmount / monthlyPayment;
	return totalMonths;
}


int main()
{
	float loanAmount = readPositiveNumber("Please enter the loan amount.\n");
	float  monthlyPayment = readPositiveNumber("Please enter the monthly payment.\n");
	cout << "The total of months to pay is : " << calculateTotalMonths(loanAmount, monthlyPayment);
	return 0;
}