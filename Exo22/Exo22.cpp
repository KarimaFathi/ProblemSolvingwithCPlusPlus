#include <iostream>
#include <cmath>
using namespace std;

void readDimensions(float &a, float &b) {
    cout << "Please enter the triangle side a\n";
    cin >> a;
    cout << "Please enter the triangle side b\n";
    cin >> b;
}

float calcInscribedCircleArea(float a, float b) {
    const float PI = 3.14;
    float area = (PI * pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
    return area;
}

void printArea(float area) {
    cout << "The circle area is " << area << endl;
}


int main()
{
    float a, b;
    readDimensions(a, b);
    printArea(calcInscribedCircleArea(a, b));
}