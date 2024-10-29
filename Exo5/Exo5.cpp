#include<iostream>
using namespace std;

struct stPersonInfo {
    short age;
    bool hasDriverLicense;
    bool hasRecommendation;
};

stPersonInfo readPersonInfo() {
    stPersonInfo person;
    cout << "Please enter your age.\n";
    cin >> person.age;
    cout << "Do you have a driving license ? (1/0)\n";
    cin >> person.hasDriverLicense;
    cout << "Do you have a recommendation ? (1/0)\n";
    cin >> person.hasRecommendation;
    return person;

}
bool isHired(stPersonInfo person) {
    return ((person.age > 21 && person.hasDriverLicense) || person.hasRecommendation);
}

void printResult(stPersonInfo person) {
    if (isHired(person)) {
        cout << "\nyour are hired\n";
    }
    else cout << "\nyour are rejected\n";
}


int main()
{
    printResult(readPersonInfo());
}
