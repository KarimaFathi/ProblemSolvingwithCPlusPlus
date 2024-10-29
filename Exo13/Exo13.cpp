#include <iostream>
using namespace std;

void readNumbers(int& num1, int& num2, int &num3) {
	cout << "Please enter the first number.\n";
	cin >> num1;
	cout << "Please enter the second number.\n";
	cin >> num2;
	cout << "Please enter the third number.\n";
	cin >> num3;
}

int findMax(int num1, int num2, int num3) {
	if (num1 >= num2 && num1 >= num3)
		return num1;
	else if (num2 >= num1 && num2 >= num3)
		return num2;
	else return num3;
	//logic 2:
	/*if (num1 > num2) {
		if (num1 > num3)
			return num1;
		else return num3;

	}
	if (num2 > num1) {
		if (num2 > num3) 
			return num2;
		else return num3;
		}*/
}


void printMax(int max) {
	cout << "the max of the 3 numbers is " << max << endl;
}
int main()
{
	int num1, num2, num3;
	readNumbers(num1, num2, num3);
	printMax(findMax(num1, num2, num3));

}

