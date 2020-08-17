#include <iostream>
#include <string>
#include <vector>
using namespace std;

// declaring functions here
string IntegerToReverseBinary(int integerValue);
string ReverseString(string userString);

// main code
int main() {
   int userNum;
   string reversedString;
   cin >> userNum;

   reversedString = IntegerToReverseBinary(userNum);
   // cout << reversedString << endl; // debugging purposes
   cout << ReverseString(reversedString) << endl;

   return 0;
}

// defining functions here
string IntegerToReverseBinary(int integerValue) {
   string str;
   int integer = integerValue;

   if (integer == 0) {
      str.append("0");
   }
   else {
      while (integer > 0) {
         str.append( to_string(integer % 2) ); // appends the new integer as a char to the end of the string
         integer /= 2;
      }
   }

   return str;
}

string ReverseString(string userString) {
   string str = userString;
   int tmpVal;

   for (unsigned int i = 0; i < (str.size() / 2) ; ++i ) { // ensures that middle char is untouched if the string has an odd number of characters
      tmpVal = str.at(i);
      str.at(i) = str.at(str.size() - i - 1); // setting nth char equal to (size - n - 1)th char (aka performing reversal for first half of string)
      str.at(str.size() - i - 1) = tmpVal;
   }

   return str;

}
