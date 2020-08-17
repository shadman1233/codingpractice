
#include <iostream>
#include <vector>
using namespace std; // in the standard namespace

void numsInsert(vector<int>& numsList, int newNum) {
   unsigned int i;

   if ( numsList.size() == 0 ) {
      numsList.push_back(newNum);
   }
   else {
      int tempsize = numsList.size();
      for (i = 0; i < numsList.size(); ++i) {
         if (newNum < numsList.at(i)) {
            numsList.insert(numsList.begin() + i, newNum);
            break;
         }
      }

      if ( tempsize == numsList.size() ) {
        numsList.push_back(newNum);
      }
   }

}

void numsPrint(const vector<int>& numsList) {
   unsigned int i;

   for (i = 0; i < numsList.size(); ++i) {
      cout << " " << numsList.at(i) << endl;
   }
}

int main() {
   vector<int> numsList;
   numsInsert(numsList, 55);
   numsInsert(numsList, 4);
   numsInsert(numsList, 250);
   numsInsert(numsList, 19);
   numsPrint (numsList);

   return 0;
}
