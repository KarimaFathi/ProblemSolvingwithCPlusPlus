#include <iostream>
using namespace std;

int readGradeFromRange(short from, short to) {
    short grade;
    do {
        cout << "Please enter your grade from " << from << " to " << to << endl;
        cin >> grade;
    } while (grade < 0 || grade > 100);
    return grade;
}

char EvaluateGrade(int grade) {
    if (grade >= 90) {
        return 'A';
    }
    else if (grade >= 80) {
        return 'B';
    }
    else if (grade >= 70) {
        return 'C';
    }
    else if (grade >= 60) {
        return 'D';
    }
    else if (grade >= 50) {
        return 'E';
    }
    else return 'F';
}

int main()
{
    cout << "The result of your grade is " << EvaluateGrade(readGradeFromRange(0, 100)) << endl;
}
