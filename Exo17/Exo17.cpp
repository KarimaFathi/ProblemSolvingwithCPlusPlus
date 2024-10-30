#include <iostream>
#include <cmath>
using namespace std;

void readDimensions(float& a, float& h) {
    cout << "Please enter the rectangle's base.\n";
    cin >> a;
    cout << "Please enter the rectangle's height.\n";
    cin >> h;
}

float calculateArea(int a, int h) {
    return (float) a / 2 * h ;
}

void printArea(float area) {
    cout << "The rectangle area is " << area << endl;
}


int main()
{
    float a, h;
    readDimensions(a, h);
    printArea(calculateArea(a, h));
}

