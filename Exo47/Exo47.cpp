#include <iostream>
using namespace std;

bool readATMPINCode() {
	int code, counter = 1, test = false;
	do {
		cout << "Please enter your ATM PIN code.\n";
		cin >> code;
		if (code == 1234) {
			test = true;
			return test;
		}
		else if (code != 1234 && counter < 3){
			cout << "Wrong PIN\n";
			counter++;
		}
		else {
			return test;
		}
		} while (counter <= 3);
	}


string printBalance(bool test) {
	if (test == false) {
		return "You've reached your limit.\n";
	}
	else return "Your balance is: 7500\n";
}



int main()
{
	cout << printBalance(readATMPINCode());
}

//method 2:

//string readPinCode() {
//	string PinCode;
//	cout << "Please enter PIN code \n";
//	cin >> PinCode;
//	
//	return PinCode;
//}
//
//bool login() {
//	string PinCode;
//	int counter = 3;
//	do {
//		counter--;
//		PinCode = readPinCode();
//		if (PinCode == "1234") {
//			return 1; //this will exit the function and return true
//		}
//		else {
//			system("color 4F");
//			cout << "\nWrong PIN,you have " << counter << " more tries. \n";
//		}
//	} while (counter >= 1 && PinCode != "1234");
//	return 0; //when you reach here this means login failed.
//}
//
//int main() {
//	if (login()) {
//		system("color 2F");
//		cout << "\n Your account balance is " << 7500 << '\n';
//	}
//	else {
//		cout << "\nYour card is blocked, call the bank for help. \n";
//	}
//	return 0;
//}