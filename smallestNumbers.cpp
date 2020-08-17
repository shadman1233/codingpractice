#include <iostream>
#include <vector>
using namespace std;

int main() {

   vector<int> Values;
   int numValues;
   int nextValue;
   int smallest;
   int secondSmallest;
   unsigned int count;

   cin >> numValues;

   cin >> nextValue;
   for (int i = 0; i < numValues; ++i) {
      Values.push_back(nextValue); // populating the vector with values
      if (i == numValues - 1) {
         break;
      }
      else {
         cin >> nextValue;
      }
   }

   // determining smallest number

   smallest = Values.at(0);

   for (unsigned int i = 0; i < Values.size(); ++i) {
      if (Values.at(i) < smallest) {
         smallest = Values.at(i);
      }
   }

   // removing smallest number from Values vector

   for (unsigned int i = 0; i < Values.size(); ++i) {
      if (Values.at(i) == smallest) {
         count = i;
      }
   }

   Values.erase(Values.begin() + count);

   // determining second smallest Number

   secondSmallest = Values.at(0);

   for (unsigned int i = 0; i < Values.size(); ++i) {
      if (Values.at(i) < secondSmallest) {
         secondSmallest = Values.at(i);
      }
   }

   cout << smallest << " " << secondSmallest << endl;

   return 0;
}
