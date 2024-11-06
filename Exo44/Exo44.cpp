#include <iostream>
using namespace std;

enum enDaysOfWeek {mon = 1, tue = 2, wed = 3, thur = 4, fri = 5, sat = 6, sun = 7};


int readNumberInRange(string message) {
	int num;
	do {
		cout << message;
		cin >> num;
	} while (num < 1 || num > 7);
	return num;
}

enDaysOfWeek readDayOfWeek(int num) {
	return (enDaysOfWeek)num;
}

string getDayOfWeek(enDaysOfWeek day) {
	switch (day) {
	case(::mon):
		return "Monday";
	case(::tue):
		return "Tuesday";
	case(::wed):
		return "Wednesday";
	case(::thur):
		return "Thursday";
	case(::fri):
		return "Friday";
	case(::sat):
		return "Saturday";
	case(::sun):
		return "Sunday";
	default:
		"Not a valid day";
	}


}



int main()
{
	int num = readNumberInRange("Please enter a number between 1 and 7.\n");
	cout << "It's " << getDayOfWeek(convertNumberToEnumType(num));
}
