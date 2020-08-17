#include <iostream>
#include <vector>
using namespace std;

int main() {

  int numInts; // first input from user, indicating number of integers to follow
  vector<int> numList; // vector to contain numInts integers
  int threshold; // threshold value to compare against each value in numList

  cin >> numInts;
  numList.resize(numInts); // resize numList to incoming number of inputs

  for (int i = 0; i < numInts; ++i) {
    cin >> numList.at(i); // populate numList vector with inputs
  }

  cin >> threshold;

  for (unsigned int i = 0; i < numList.size(); ++i) {
    if (numList.at(i) <= threshold) {
      cout << numList.at(i) << " ";
    }
  }

  cout << endl;

  return 0;
}
