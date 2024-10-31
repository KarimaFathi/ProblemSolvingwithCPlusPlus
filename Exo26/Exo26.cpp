#include <iostream>
using namespace std;

int readRangeLimit() {
	int N;
	cout << "Please enter the range limit.\n";
	cin >> N;
	return N;
}


void printFrom1ToN_UsingFor(int N) {
	for (int i = 1; i <= N; i++) {
		cout << i  << endl;
	}
}

void printFrom1ToN_UsingWhile(int N) {
	int i = 1;
	while (i <= N) {
		cout << i << endl;
		i++;
	}
}

void printFrom1ToN_UsingDoWhile(int N) {
	int i = 1;
	do {
		cout << i << endl;
		i++;
	} while (i <= N);
}

int main()
{
	printFrom1ToN_UsingFor(readRangeLimit());
	//printFrom1ToN_UsingWhile(readRangeLimit());
	//printFrom1ToN_UsingDoWhile(readRangeLimit());
}


