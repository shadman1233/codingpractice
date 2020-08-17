#include <iostream>
using namespace std;

int main() {
   int numRows;
   int numColumns;
   int currentRow;
   int currentColumn;
   char currentColumnLetter;

   cin >> numRows;
   cin >> numColumns;

   // currentRow = 1;
   // currentColumn = 1;

   for (currentRow = 1; currentRow <= numRows; ++currentRow) {
     for (currentColumn = 1; currentColumn <= numColumns; ++currentColumn) {
       cout << currentRow;
       currentColumnLetter = currentColumn + 64;
       cout << currentColumnLetter << " ";
     }
   }
   cout << endl;

   return 0;
}
