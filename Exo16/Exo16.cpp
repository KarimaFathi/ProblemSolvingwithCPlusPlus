#include <iostream>
#include <cmath>
using namespace std;

void readDimensions(int &a, int &d) {
    cout << "Please enter the rectangle's diagonal.\n";
    cin >> d;
    cout << "Please enter the rectangle's side area.\n";
    cin >> a;
}

float calculateArea(int a, int d) {
    return (float) a * sqrt(pow(d, 2) - pow(a, 2));
}

void printArea(float area) {
    cout << "The rectangle area is " << area << endl;
}


int main()
{
    int a, d;
    readDimensions(a, d);
    printArea(calculateArea(a, d));
}

