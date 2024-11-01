#include <iostream>
using namespace std;

enum enOperationType {add = '+', substract = '-', multiply = '*', divide = '/'};

float readNumber(string message) {
    float number;
    cout << message;
    cin >> number;
    return number;
}

enOperationType readOperationType() {
    char OT;
    cout << "Please enter an operation type ( +, -, *, /) ?\n";
    cin >> OT;
    return  (enOperationType)OT;

}


float performOperation(int number1, int number2, enOperationType operationType) {
    switch (operationType) {
    case(enOperationType::add):
        return number1 + number2;
        break;
    case(enOperationType::substract):
        return number1 - number2;
        break;
    case(enOperationType::multiply):
        return number1 * number2;
        break;
    case(enOperationType::divide):
        return (float)number1 / number2;
        break;
    default:
        return number1 + number2;
    }
}

int main()
{
    float number1 = readNumber("Please enter the first number ?\n");
    float number2 = readNumber("Please enter the second number ?\n");
    enOperationType operationType = readOperationType();
   
    cout << "Result = " << performOperation(number1, number2, operationType);
}


