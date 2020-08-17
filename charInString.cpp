#include <iostream>
#include <string>
using namespace std;

int main() {

  char inputChar;
  string inputString;
  int numberChar;

  cin >> inputChar;

  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // or just cin.ignore();

  getline(cin, inputString);

  numberChar = 0;

  for (unsigned int i = 0; i < inputString.size(); ++i) {
    if (inputString.at(i) == inputChar) {
      numberChar += 1;
    }
  }

  cout << numberChar << endl;
  return 0;

}
