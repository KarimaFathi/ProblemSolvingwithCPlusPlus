#include <iostream>
#include <cmath>
using namespace std;

float readDimensions() {
    float d;
    cout << "Please enter the circle diameter.\n";
    cin >> d;
    return d;

}

float calculateArea(float d) {
    const float PI = 3.14;
    float area = PI * pow(d, 2) / 4;
    return area;
}

void printArea(float area) {
    cout << "The circle area is " << area << endl;
}


int main()
{
    printArea(calculateArea(readDimensions()));
}