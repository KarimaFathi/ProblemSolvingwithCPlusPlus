#include <iostream>
using namespace std;


void readDimensions(float &length, float &width) {
    cout << "Please enter the rectangle's length\n";
    cin >> length;
    cout << "Please enter the rectangle's width\n";
    cin >> width;
}

float calculateArea(float length, float width) {
    return length * width;
}

void printArea(float area) {
    cout << "The rectangle's area with the given dimensions is " << area << endl;
}
float main()
{
    float length, width;
    readDimensions(length, width);
    printArea(calculateArea(length, width));

}
