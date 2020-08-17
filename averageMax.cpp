#include <iostream>
using namespace std;

int main() {

  int userInput;
  int maximum;
  int currentMaximum;
  double sum;
  int count;
  double average;

  cin >> userInput;

  if (userInput >= 0) {
    currentMaximum = userInput;
    count = 1;

    sum = userInput;

    while (userInput >= 0) {
      cin >> userInput;
      if (userInput >= 0) {
        if (userInput > currentMaximum) {
          currentMaximum = userInput;
        }
        sum += userInput;
        count += 1;
      }
    }

    average = sum / count;
    maximum = currentMaximum;
    cout << average << " " << maximum << endl;
  }

  return 0;

}
