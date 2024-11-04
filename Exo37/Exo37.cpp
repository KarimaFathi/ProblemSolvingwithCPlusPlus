#include <iostream>
#include <string>
using namespace std;

int readNumber(string message) {
    int num;
    cout << message;
    cin >> num;
    return num;
    
}

//int sumNumbers(int num) {
//    int sum = 0, counter = 2;
//    while (num != -99) {
//        sum += num;
//        num = readNumber("Please enter the number " + to_string(counter) + "\n");
//        counter++;
//    }
//    return sum;
//
//}

//sol 2:

int sumNumbers() {
    int num = 0, sum = 0, counter = 1;
  do {
      num = readNumber("Please enter the number " + to_string(counter) + "\n");
      if (num == -99) {
          break;
      }
        sum += num;
        counter++;
  } while (num != -99);
    return sum;

}


int main()
{
    //cout << "the sum of the given numbers is " << sumNumbers(readNumber("Please enter the number 1\n"));
    cout << "the sum of the given numbers is " << sumNumbers();
    return 0;


}

