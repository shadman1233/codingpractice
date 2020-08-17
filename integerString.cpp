#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string userString;
   bool digitInString = true;

   cin >> userString;

   for (unsigned int i = 0; i < userString.size(); ++i ) {
     if (isdigit(userString.at(i)) == false) {
       cout << "no" << endl;
       digitInString = false;
       break;
     }
   }

   if (digitInString == true) {
     cout << "yes" << endl;
   }

   return 0;
}
