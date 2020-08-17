#include <iostream>
#include <vector>
using namespace std;

class TaxTableTools {
   public:
      TaxTableTools();
      double GetValue(int searchArgument);
      void SetTables(vector<int> newsearch, vector<double> newvals);
   private:
      vector<int> search;
      vector<double> value;
      int nEntries; // specifics the length of the search vector (which stores income brackets)
};
