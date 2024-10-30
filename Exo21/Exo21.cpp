#include <iostream>
#include <cmath>
using namespace std;

float readDimensions() {
    float l;
    cout << "Please enter the circumference\n";
    cin >> l;
    return l;

}

float calculateCircumferenceCircleArea(float l) {
    const float PI = 3.14;
    float area =  pow(l, 2) / (4 * PI);
    return area;
}

void printArea(float area) {
    cout << "The circle area is " << area << endl;
}


int main()
{
    printArea(calculateCircumferenceCircleArea(readDimensions()));
}

