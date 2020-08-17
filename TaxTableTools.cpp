#include <iostream>
#include <vector>
#include <limits>
#include "TaxTableTools.h"
using namespace std;

// Default constructor
TaxTableTools::TaxTableTools() {
   // income brackets stored in a vector below
   search.push_back(0);
   search.push_back(20000);
   search.push_back(50000);
   search.push_back(100000);
   search.push_back(numeric_limits<int>::max());
   // tax rates stored in a vector below
   value.push_back(0.0);
   value.push_back(0.10);
   value.push_back(0.20);
   value.push_back(0.30);
   value.push_back(0.40);
   nEntries = search.size();  // Set the length of the search table
}

// ***********************************************************************

void TaxTableTools::SetTables(vector<int> newsearch, vector<double> newvals) {
   search.clear();
   for (unsigned int i = 0; i < newsearch.size(); ++i) {
      search.push_back(newsearch.at(i));
   }
   value.clear();
   for (unsigned int j = 0; j < newvals.size(); ++j) {
      value.push_back(newvals.at(j));
   }
}

// FIXME: Write a void setter function that sets new values for the private
//        search and value tables. Name the function: SetTables
//        The function receives as parameters tables from which to load the
//        search and value tables.

// ************************************************************************

// Function to get a value from one table based on a range in the other table
double TaxTableTools::GetValue(int searchArgument) {
   double result;
   bool keepLooking;
   int i;

   i = 0;
   keepLooking = true;

   while ((i < nEntries) && keepLooking) {
      if (searchArgument <= search.at(i)) {
         result = value[i];
         keepLooking = false;
      }
      else {
         ++i;
      }
   }

   return result;
}
