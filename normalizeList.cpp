#include <iostream>
#include <vector>
using namespace std;

int main() {

  int numInts;
  vector<int> numList;
  int minVal;

  cin >> numInts;
  numList.resize(numInts);

  for (int i = 0; i < numInts; ++i) {
    cin >> numList.at(i);
  }

  minVal = numList.at(0);

  for (unsigned int i = 0; i < numList.size(); ++i) {
    if (numList.at(i) < minVal) {
      minVal = numList.at(i);
    }
  }

  for (unsigned int i = 0; i < numList.size(); ++i) {
    numList.at(i) -= minVal;
    cout << numList.at(i) << " ";
  }

  cout << endl;

  return 0;
}
