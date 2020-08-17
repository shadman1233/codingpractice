#include <iostream>
#include <string>
using namespace std;

int main() {
  string coreGtld1;
  string coreGtld2;
  string coreGtld3;
  string coreGtld4;
  string inputName;
  string searchName;
  string theTld;
  bool isCoreGtld;
  int periodCounter;  // Number of periods in the domain name
  int periodPosition;   // Position of the period in the domain name
  unsigned int j;

  coreGtld1 = ".com";
  coreGtld2 = ".net";
  coreGtld3 = ".org";
  coreGtld4 = ".info";
  theTld = "";
  isCoreGtld = false;
  periodPosition = 0;

  cout << endl << "Enter the next domain name (type 'exit' to exit): " << endl;
  cin >> inputName;

  while (inputName != "exit") {
    searchName = inputName;
    // Turn inputName into all lowercase letters
    for (j = 0; j < inputName.size(); ++j) {
      searchName.at(j) = tolower(inputName.at(j));
    }

    isCoreGtld = false; // initialize isCoreGtld to false
    periodCounter = 0; // initialize period counter

    for (int i = 0; i < searchName.size(); ++i) {
      if (searchName.at(i) == '.') {
        periodCounter += 1;
        periodPosition = i;
      }
    }

    //        Write a for loop using variable i to store in periodCounter the
    //        number of periods in searchName. Store the position of the period in
    //        PeriodPosition. If searchName has exactly one period and searchName's
    //        first character is not a period, determine whether searchName has a
    //        valid core gTLD by extracting the domain name into variable coreGtld
    //        and comparing the name with valid core gTLDs.

    // Extract the top-level domain name starting at the period's position.
    // Ex: If searchName = "example.com", the next statement extracts ".com"

    if (periodCounter == 1) {
      if (searchName.at(0) != '.') {
        theTld = searchName.substr(periodPosition,searchName.size() - periodPosition);
        if ( (theTld == coreGtld1) || (theTld == coreGtld2) || (theTld == coreGtld3) || (theTld == coreGtld4) ) {
          isCoreGtld = true;
        }
        else {
          isCoreGtld = false;
        }
      }
    }

    cout << "\"" << inputName << "\" ";
    if (isCoreGtld) {
      cout << "is a second-level domain followed by a core gTLD of \"" <<
                 theTld << "\"." << endl;
    }
    else {
      cout << "is not a second-level domain followed by a core gTLD." << endl;
    }

    cout << theTld << endl;

    cout << endl << "Enter the next domain name (or <Enter> to exit): " << endl;
    inputName = "";
    cin >> inputName;
   }

   return 0;

}
