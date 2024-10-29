#include <iostream>
using namespace std;

void readNumbers(int& num1, int& num2) {
	cout << "Please enter the first number.\n";
	cin >> num1;
	cout << "Please enter the first number.\n";
	cin >> num2;
}

int findMax(int num1, int num2) {
	if (num1 > num2)
		return num1;
	else return num2;
}

void printMax(int max) {
	cout << "the max of the 2 numbers is " << max << endl;
}
int main()
{
	int num1, num2;
	readNumbers(num1, num2);
	printMax(findMax(num1, num2));

}

