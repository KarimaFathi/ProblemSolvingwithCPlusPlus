#include <iostream>
using namespace std;

enum enMark {pass = 1, fail = 2};
short readMark() {
	short mark;
	cout << "Please enter your mark.\n";
	cin >> mark;
	return mark;
}

enMark evaluateMark(short mark) {
	if (mark >= 50) {
		return enMark::pass;
	}
	else return enMark::fail;
}

void printResult(short mark) {
	if (evaluateMark(mark) == enMark::pass)
		cout << "You passed\n";
	else
		cout << "You failed\n";
}
int main()
{
	printResult(readMark());
}

