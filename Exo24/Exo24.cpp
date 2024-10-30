#include <iostream>
using namespace std;

short readAge() {
	short age;
	cout << "Please enter your age.\n";
	cin >> age;
	return age;

}

bool validateAge(short age, short from, short to) {
	return (age >= from && age <= to);
}

void printResult(short age) {
	if (validateAge(age, 18, 45))
		cout << "\nValid age\n";
	else cout << "\nInValid age\n";

}

int main()
{
	printResult(readAge());
}


