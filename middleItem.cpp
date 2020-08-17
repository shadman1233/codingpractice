#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {

  vector<int> numList;
  bool keepGoing = true;
  int tmpVal;
  int count;
  int middleIndex;

  count = 0; // to keep track of number of inputs

  while (keepGoing) {
      cin >> tmpVal;
      if (tmpVal >= 0) {
        numList.push_back(tmpVal);
        count += 1;
        if (count > 9) {
          cout << "Too many inputs" << endl;
          break;
        }
      }
      else {
        keepGoing = false;
      }
    }

  if (count <= 9) {
    if (numList.size() == 1) {
      middleIndex = 0;
    }
    else {
      middleIndex = (numList.size() / 2);
    }

    cout << numList.at(middleIndex) << endl;
  }

  return 0;
}
