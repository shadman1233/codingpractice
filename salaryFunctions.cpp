#include <iostream>
#include <vector>
using namespace std;

double GetCorrespondingTableValue(int search, vector<int> baseTable, vector<double> valueTable); // function declaration

int PromptForInteger(); // returns a user-inputted integer (used to store annual salary amount)

int main() {
   int annualSalary;
   double taxRate;
   int taxToPay;
   vector<int> salaryBase(5);
   vector<double> taxBase(5);

   salaryBase.at(0) = 0;
   salaryBase.at(1) = 20000;
   salaryBase.at(2) = 50000;
   salaryBase.at(3) = 100000;
   salaryBase.at(4) = 99999999;

   taxBase.at(0) = 0.0;
   taxBase.at(1) = 0.10;
   taxBase.at(2) = 0.20;
   taxBase.at(3) = 0.30;
   taxBase.at(4) = 0.40;

   annualSalary = PromptForInteger(); // get first annual salary from user

   while (annualSalary < 0) {
      cout << "You entered an impossible salary amount!!!" << endl;
      annualSalary = PromptForInteger();
      if (annualSalary == 0){
         break;
      }
   }

   // while loop to determine which tax rate applies to the user entered salary
   while (annualSalary > 0) {
      taxRate = GetCorrespondingTableValue(annualSalary, salaryBase, taxBase);

      taxToPay = static_cast<int>(annualSalary * taxRate);  // Truncate tax to an integer amount
      cout << "Annual salary: " << annualSalary <<
              "\nTax rate: " << taxRate <<
              "\nTax to pay: " << taxToPay << endl;

      // Get the next annual salary
      annualSalary = PromptForInteger();

      // Adjust for user entering a salary that doesn't make any sense
      if (annualSalary <= 0) {
         cout << "Please enter a salary that is greater than 0!!!" << endl;
         annualSalary = PromptForInteger();
         if (annualSalary == 0) {
            break;
         }
      }
   }

   return 0;
}

double GetCorrespondingTableValue(int search, vector<int> baseTable, vector<double> valueTable) {
   int baseTableLength;
   double value;
   int i;
   bool keepLooking;

   baseTableLength = baseTable.size();
   i = 0;
   keepLooking = true;

   while ((i < baseTableLength) && keepLooking) {
      if (search <= baseTable.at(i)) {
         value = valueTable.at(i);
         keepLooking = false;
      }
      else {
         ++i;
      }
   }

   return value;
}

int PromptForInteger() {
   int inputVal;

   cout << "\nEnter annual salary (0 to exit): " << endl;
   cin >> inputVal;

   return inputVal;
}
