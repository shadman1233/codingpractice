#include <iostream>
#include <string>
using namespace std;

int main() {
  const string SALARY_PROMPT = "\nEnter annual salary (0 to exit): ";
  int annualSalary;
  int adjustedSalary;
  int deduction;
  int totalDeductions;
  double taxRate;
  int taxToPay;

  cout << SALARY_PROMPT;
  cin >> annualSalary;

  while (annualSalary > 0) {
    totalDeductions = 0;
    cout << "Enter a tax deduction you have (enter 0 or less if no deductions)." << endl;
    cin >> deduction;
    while (deduction > 0) {
      totalDeductions += deduction;
      cout << "Enter any additional tax deduction you have (enter 0 or less if no more deductions)." << endl;
      cin >> deduction;
    }

   // determine the tax rate from the annual salary
   adjustedSalary = annualSalary - totalDeductions;
   if (adjustedSalary <= 0) {
     taxRate = 0.0;
   }
   else if (adjustedSalary <= 20000) {
     taxRate = 0.10;        // 0.10 is 10% written as a decimal
   }
   else if (adjustedSalary <= 50000) {
     taxRate = 0.20;
   }
   else if (adjustedSalary <= 100000) {
     taxRate = 0.30;
   }
   else {
     taxRate = 0.40;
   }

   taxToPay = static_cast<int>(adjustedSalary * taxRate);   // Truncate tax to an integer amount
   cout << "Annual salary: " << annualSalary << endl;
   cout << "\nDeductions: " << totalDeductions << endl;
   cout << "Adjusted salary after deductions: " << adjustedSalary << endl;
   cout << "Tax rate based on adjusted salary: " << taxRate << endl;
   cout << "Tax to pay: " << taxToPay << endl;

   // Get the next annual salary
   cout << SALARY_PROMPT << endl;
   cin >> annualSalary;
 }

 return 0;

}
