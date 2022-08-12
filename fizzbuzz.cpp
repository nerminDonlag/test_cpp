#include <iostream>
#include <string> 
using namespace std;

string fizzer(int num) {
    string aux = to_string(num);
    if(num%15 == 0) {
      return "FizzBuzz";
    }
    if(num%5 == 0) {
      return "Buzz";
    }
    if(num%3 == 0) {
      return "Fizz";
    }
    return aux;
  }

int main() {
  
  int userNumber;
  cout << "Please enter number: ";
  cin >> userNumber;

  string resultArray[userNumber] = {};

  for(int i = 0; i < userNumber; i++) {
    resultArray[i] = fizzer(i + 1);
    cout << fizzer(i + 1) << ", ";
  }

  cout << endl;

  return 0;
}