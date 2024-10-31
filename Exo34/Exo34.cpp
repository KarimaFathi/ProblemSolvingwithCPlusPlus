#include <iostream>
using namespace std;

int readTotalSales() {
	int totalSales;
	cout << "Please enter your total sales.\n";
	cin >> totalSales;
	return totalSales;
}

float getCommissionPercentage(int totalSales) {
	if (totalSales >= 1000000) {
		return 0.01;
	}
	else if (totalSales >= 500000) {
		return 0.02;
	}
	else if (totalSales >= 100000) {
		return 0.03;
	}
	else if (totalSales >= 50000) {
		return 0.05;
	}
	else return 0;
}

float calculateTotalCommission(int totalSales) {
	return getCommissionPercentage(totalSales) * totalSales;
}


int main()

{
	cout << endl <<  "Total commission : " << calculateTotalCommission(readTotalSales());
}
