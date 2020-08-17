#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

string HeadsOrTails() {
   vector<string> options(2);
   int index;
   string value;

   options.at(0) = "heads";
   options.at(1) = "tails";

   index = rand() % 2; // pick a random index between 0 and 1
   value = options.at(index); // a random value taken from that list

   return value;
}

int main() {
   int numFlips;

   cin >> numFlips;

   srand(2);  // Unique seed, ensures the pseudorandom order is the same each time (for autograder purposes only)

   for (int i = 1; i <= numFlips; ++i) {
      cout << HeadsOrTails() << endl;
   }

   return 0;
}
