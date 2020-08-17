#include <iostream>
using namespace std;

void SwapValues(int& userVal1, int& userVal2) {
   cout << userVal2 << " " << userVal1 << endl;
}

int main() {
   int userVal1;
   int userVal2;

   cin >> userVal1;
   cin >> userVal2;

   SwapValues(userVal1, userVal2);

   return 0;
}
