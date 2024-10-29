#include <iostream>
using namespace std;

struct stFullName {
	string firstName, lastName;
};

stFullName readName() {
	stFullName name;
	cout << "\nPlease enter your first name\n";
	cin >> name.firstName;
	cout << "\nPlease enter your last name\n";
	cin >> name.lastName;
	return name;

}

string getFullName(stFullName name) {
	string fullName;
	fullName = name.firstName + " " + name.lastName;
	return fullName;
}


void printName(string fullName) {
	cout << "\n Your fullName is " << fullName;
}

int main()
{
	printName(getFullName(readName()));

}


