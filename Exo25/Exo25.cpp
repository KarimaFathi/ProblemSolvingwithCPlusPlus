#include <iostream>
using namespace std;

short readAge() {
	short age;
	cout << "Please enter your age.\n";
	cin >> age;
	return age;

}

bool validateAge(short age, short from, short to) {
	return(age >= from && age <= to);
}

short readUntilAgeInRange(short from, short to) {
	//logic 1
	/*short age = readAge();
	while (!validateAge(age, from, to)) {
		cout << "invalid age\n";
		age = readAge();
	}*/
	//logic 2
	short age;
	do {
		age = readAge();
	} while (!validateAge(age, from, to));
	return age;
}

void printResult(short age) {
	cout << "Your age " << age << " is valid\n";

}

int main()
{
	printResult(readUntilAgeInRange(18, 45));
}

