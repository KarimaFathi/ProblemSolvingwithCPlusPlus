#include <iostream>
#include <cmath>
using namespace std;

float readDimensions() {
    float r;
    cout << "Please enter the circle radius.\n";
    cin >> r;
    return r;
   
}

float calculateArea(float r) {
    const float PI = 3.14;
    float area = PI * pow(r, 2);
    return area;
}

void printArea(float area) {
    cout << "The rectangle area is " << area << endl;
}


int main()
{
    printArea(calculateArea(readDimensions()));
}