#include <iostream>
using namespace std;

int main() {
  int annualSalary;
  double taxRate;
  int taxToPay;
  int startingAnnualSalary;
  int endingAnnualSalary;
  int taxIncrement;

  annualSalary = 0;
  cout << "Please enter a starting annual salary for the tax table." << endl;
  cin >> startingAnnualSalary;
  cout << "Please enter an ending annual salary for the tax table." << endl;
  cin >> endingAnnualSalary;
  cout << "Please enter the tax increment you would like to see between rows in your tax table." << endl;
  cin >> taxIncrement;

  for (annualSalary = startingAnnualSalary; annualSalary <= endingAnnualSalary; annualSalary += taxIncrement) {
    // Determine the tax rate from each annual salary
    if (annualSalary <= 0) {
      taxRate = 0.0;
    }
    else if (annualSalary <= 20000) {
      taxRate = 0.10;   // 0.10 is 10% written as a decimal
    }
    else if (annualSalary <= 50000) {
      taxRate = 0.20;
    }
    else if (annualSalary <= 100000) {
      taxRate = 0.30;
    }
    else {
      taxRate = 0.40;
    }
    taxToPay = static_cast<int>(annualSalary * taxRate);   // Truncate tax to an integer amount
    cout << "Annual salary: " << annualSalary << " | Tax rate: " << taxRate << " | Tax to pay: " << taxToPay << endl;
  }

   return 0;
}
