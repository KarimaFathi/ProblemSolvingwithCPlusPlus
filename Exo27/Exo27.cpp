#include <iostream>
using namespace std;

int readRangeLimit() {
	int N;
	cout << "Please enter the range limit.\n";
	cin >> N;
	return N;
}


void printFromNTo1_UsingFor(int N) {
	for (int i = N; i >= 1; i--) {
		cout << i << endl;
	}
}

void printFromNTo1_UsingWhile(int N) {
	int i = N;
	while (i >= 1) {
		cout << i << endl;
		i--;
	}
}

void printFromNTo1_UsingDoWhile(int N) {
	int i = N;
	do {
		cout << i << endl;
		i--;
	} while (i >= 1);
}

int main()
{
	//printFromNTo1_UsingFor(readRangeLimit());
	//printFromNTo1_UsingWhile(readRangeLimit());
	printFromNTo1_UsingDoWhile(readRangeLimit());
}

