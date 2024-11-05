#include <iostream>
using namespace std;


const int secondsPerDay = 60 * 60 * 24;
const short secondsPerHour = 60 * 60;
const short secondsPerMinute = 60;

int readPositiveNumber(string message) {
	int num;
	do {
		cout << message;
		cin >> num;
	} while (num < 0);
	return num;
}

int convertSecondsToDays(int totalOfSeconds) {
	int numberOfDays = floor(totalOfSeconds / secondsPerDay);
	return numberOfDays;

}
int convertDaysRemainderToHours(int totalOfSeconds) {

	float remainder = totalOfSeconds % secondsPerDay;
	int numberOfHours = floor(remainder / secondsPerHour);
	return numberOfHours;
}

int convertHoursRemainderToMinutes(int totalOfSeconds) {

	float remainder = (totalOfSeconds % secondsPerDay) % secondsPerHour;
	int numberOfMinutes = floor(remainder / secondsPerMinute);
	return numberOfMinutes;

}

int convertMinutesRemainderToSeconds(int totalOfSeconds) {
	float remainder = ((totalOfSeconds % secondsPerDay) % secondsPerHour) % secondsPerMinute;
	return remainder;

}

int main()
{
	int totalOfSeconds = readPositiveNumber("Please enter the total number of seconds.\n");
	cout << convertSecondsToDays(totalOfSeconds) << ":" 
		<< convertDaysRemainderToHours(totalOfSeconds) << ":" 
		<< convertHoursRemainderToMinutes(totalOfSeconds) << ":" 
		<< convertMinutesRemainderToSeconds(totalOfSeconds) << endl;
	return 0;

}
