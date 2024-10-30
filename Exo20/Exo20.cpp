#include <iostream>
#include <cmath>
using namespace std;

float readDimensions() {
    float a;
    cout << "Please enter the square side.\n";
    cin >> a;
    return a;

}

float calcCircleAreaInscribedInSquare(float a) {
    const float PI = 3.14;
    float area = (PI * pow(a, 2)) / 4;
    return area;
}

void printArea(float area) {
    cout << "The circle area is " << area << endl;
}


int main()
{
    printArea(calcCircleAreaInscribedInSquare(readDimensions()));
}

