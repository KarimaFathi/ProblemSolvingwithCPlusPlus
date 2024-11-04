#include <iostream>
using namespace std;

struct stDuration {
	float days, hours, minutes, seconds;
};


int readPositiveNumber(string message) {
	int num;
	do {
		cout << message;
		cin >> num;
	} while (num < 0);
	return num;
}

float durationToTotalSeconds(stDuration duration) {
	float totalSeconds = duration.seconds + duration.days * 24 * 60 * 60 + duration.hours * 60 * 60 + duration.minutes * 60;
	return totalSeconds;
}

int main()
{
	stDuration Duration;
    Duration.days = readPositiveNumber("Please enter the number of days.\n");
	Duration.hours = readPositiveNumber("Please enter the number of hours.\n");
    Duration.minutes = readPositiveNumber("Please enter the number of minutes.\n");
	Duration.seconds = readPositiveNumber("Please enter the number of seconds.\n");

	cout << "The total of seconds is " << durationToTotalSeconds(Duration) << " seconds.\n";
}
