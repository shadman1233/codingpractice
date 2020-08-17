#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

int main() {
  vector<int> userInts; // A vector to hold the user's input integers
  int numInts;

  cin >> numInts; // input number of integers that will be inputted
  userInts.resize(numInts);

  for (int i = 0; i < numInts; ++i) {
    cin >> userInts.at(i);
  }

  for (int j = numInts - 1; j >= 0; --j) {
    cout << userInts[j] << " ";
  }

  cout << endl;

  return 0;
}
