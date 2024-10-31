#include <iostream>
using namespace std;


// or you can put all these variables in a structure like that struct stPeggyMoneyType { int pennies, nickels, dimes, quarters, dollars; }
void readInfo(int &pennies, int &nickels, int &dimes, int &quarters, int &dollars) {
	cout << "Please enter successively the number of pennies, nickels, dimes, quarters and finally dollars.\n";
	cin >> pennies;
	cin >> nickels;
	cin >> dimes;
	cin >> quarters;
	cin >> dollars;
}

int calculateTotalPennies(int pennies, int nickels, int dimes, int quarters, int dollars) {
	return pennies + nickels * 5 + dimes * 10 + quarters * 25 + dollars * 100;
}



int main()
{
	int pennies, nickels, dimes, quarters, dollars;
	readInfo(pennies, nickels, dimes, quarters, dollars);
	int totalPennies = calculateTotalPennies(pennies, nickels, dimes, quarters, dollars);
	cout << endl << "Total pennies :" << totalPennies << endl;
	cout << "Total dollars :" << (float) totalPennies / 100 << endl;
}