#include <iostream>
#include <string> // used to access the string library
// #include <cctype> // used for checking character types like isdigit, ischar, isalpha, etc

using namespace std;

int main() {
  int totalChange;
  int numDollars;
  int numQuarters;
  int numDimes;
  int numNickels;
  int numPennies;

  cin >> totalChange;

  numDollars = totalChange / 100;
  numQuarters = (totalChange % 100) / 25;
  numDimes = ( (totalChange % 100) - (numQuarters * 25) ) / 10;
  numNickels = ( (totalChange % 100) - (numQuarters * 25) - (numDimes * 10) ) / 5;
  numPennies = (totalChange % 100) - (numQuarters * 25) - (numDimes * 10) - (numNickels * 5);

  if (totalChange <= 0) {
    cout << "No change" << endl;
  }
  else {
    if (numDollars > 1) {
      cout << numDollars << " Dollars" << endl;
    }
    else if (numDollars == 1) {
      cout << numDollars << " Dollar" << endl;
    }

    if (numQuarters > 1) {
      cout << numQuarters << " Quarters" << endl;
    }
    else if (numQuarters == 1) {
      cout << numQuarters << " Quarter" << endl;
    }

    if (numDimes > 1) {
      cout << numDimes << " Dimes" << endl;
    }
    else if (numDimes == 1) {
      cout << numDimes << " Dime" << endl;
    }

    if (numNickels > 1) {
      cout << numNickels << " Nickels" << endl;
    }
    else if (numNickels == 1) {
      cout << numNickels << " Nickel" << endl;
    }

    if (numPennies > 1) {
      cout << numPennies << " Pennies" << endl;
    }
    else if (numPennies == 1) {
      cout << numPennies << " Penny" << endl;
    }
  }

  return 0;

}
