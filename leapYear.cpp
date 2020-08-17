#include <iostream>
using namespace std;

bool IsLeapYear(int userYear);

int main() {
   int userYear;
   cin >> userYear;

   if (IsLeapYear(userYear)) {
      cout << userYear << " is a leap year." << endl;
   }
   else {
      cout << userYear << " is not a leap year." << endl;
   }

   return 0;
}

bool IsLeapYear(int userYear) {
   int year = userYear;
   bool IsLeapYear = false; // assume false unless proven true

   if ( (userYear % 4) == 0) {
      IsLeapYear = true;
   }

   if ( (year % 100) == 0) {
      if ( (year % 400) == 0) {
         IsLeapYear = true;
      }
      else {
         IsLeapYear = false;
      }
   }

   return IsLeapYear;
}
