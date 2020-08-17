#include <iostream>
#include <vector>
using namespace std;

int LargestNumber(int num1, int num2, int num3);
int SmallestNumber(int num1, int num2, int num3);

int main() {
   int num1;
   int num2;
   int num3;

   cin >> num1;
   cin >> num2;
   cin >> num3;

   cout << "largest: " << LargestNumber(num1, num2, num3) << endl;
   cout << "smallest: " << SmallestNumber(num1, num2, num3) << endl;

   return 0;
}

int LargestNumber(int num1, int num2, int num3) {
   vector<int> numValues;
   int largest;

   numValues.push_back(num1);
   numValues.push_back(num2);
   numValues.push_back(num3);

   largest = numValues.at(0);

   for (unsigned int i = 0; i < numValues.size(); ++i) {
      if (numValues.at(i) > largest) {
         largest = numValues.at(i);
      }
   }

   return largest;
}


int SmallestNumber(int num1, int num2, int num3) {
   vector<int> numValues;
   int smallest;

   numValues.push_back(num1);
   numValues.push_back(num2);
   numValues.push_back(num3);

   smallest = numValues.at(0);

   for (unsigned int i = 0; i < numValues.size(); ++i) {
      if (numValues.at(i) < smallest) {
         smallest = numValues.at(i);
      }
   }

   return smallest;
}
