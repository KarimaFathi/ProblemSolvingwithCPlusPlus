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

float convertHoursToDays (float hours) {
    return (float) hours / 24;
}

int main()
{
	float hours = readPositiveNumber("Please enter the number of hours.\n");
	float days = convertHoursToDays(hours);
	cout << "The number of days is :" << days << endl;
	cout << "the number of weeks is " << days / 7 << endl;
	return 0;
}

