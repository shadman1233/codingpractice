// g++ --std=c++11 file1.cpp file2.cpp etc. (use this to compile .cpp files)
// once compiled, it will generate an executable file like a.out or a.o
// run the file using ./a.out OR ./a.o

#include <iostream>
#include <limits>
#include <vector>
#include <string>
#include "TaxTableTools.h"

int GetInteger(const string userPrompt) {
   int inputValue;

   cout << userPrompt << ": " << endl;
   cin >> inputValue;

   return inputValue;
}

// **********************************************************************

int main() {
   const string PROMPT_SALARY = "\nEnter annual salary (-1 to exit)";
   int annualSalary;
   double taxRate;
   int taxToPay;
   vector<int> salaryBase(5);
   vector<double> taxBase(5);

   TaxTableTools table;

   salaryBase.at(0) = 0;
   salaryBase.at(1) = 20000;
   salaryBase.at(2) = 50000;
   salaryBase.at(3) = 100000;
   salaryBase.at(4) = numeric_limits<int>::max();

   taxBase.at(0) = 0.0;
   taxBase.at(1) = 0.15;
   taxBase.at(2) = 0.25;
   taxBase.at(3) = 0.35;
   taxBase.at(4) = 0.40;

   table.SetTables(salaryBase, taxBase);

   // FIXME: Call a setter function in the TaxTableClass that supplies new tables for
   //        the class to work with. The function should be called with:
   //        table.SetTables(salaryBase, taxBase);

   // Get the first annual salary to process
   annualSalary = GetInteger(PROMPT_SALARY);

   while (annualSalary >= 0) {
      taxRate = table.GetValue(annualSalary);
      taxToPay = static_cast<int>(annualSalary * taxRate);   // Truncate tax to an integer amount
      cout << "Annual Salary: " << annualSalary <<
              "\tTax rate: " << taxRate <<
              "\tTax to pay: " << taxToPay << endl;

      // Get the next annual salary
      annualSalary = GetInteger(PROMPT_SALARY);
   }

   return 0;
}
