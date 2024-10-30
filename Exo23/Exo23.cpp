#include <iostream>
#include <cmath>
using namespace std;

void readDimensions(float& a, float& b, float& c) {
    cout << "Please enter the triangle side a\n";
    cin >> a;
    cout << "Please enter the triangle side b\n";
    cin >> b;
    cout << "Please enter the triangle side b\n";
    cin >> c;
}

float calcCircleAreaByArbitraryTriangle(float a, float b, float c) {
    const float PI = 3.14;
    float p = (a + b + c) / 2;
    float t = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    float area = PI * pow(t, 2);
    return area;
}

void printArea(float area) {
    cout << "The circle area is " << area << endl;
}


int main()
{
    float a, b, c;
    readDimensions(a, b, c);
    printArea(calcCircleAreaByArbitraryTriangle(a, b, c));
}
