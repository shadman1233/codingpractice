#include <iostream>
using namespace std;

class PersonInfo {
   public:
      void   SetNumKids(int personsKidsToSet);
      void   IncNumKids();
      int    GetNumKids() const;
   private:
      int    numKids;
};

void PersonInfo::SetNumKids(int personsKidsToSet) {
   numKids = personsKidsToSet;
}

void PersonInfo::IncNumKids() {
   numKids = numKids + 1;
}

int PersonInfo::GetNumKids() const {
   return numKids;
}

int main() {
   PersonInfo person1;
   int personsKids;

   cin >> personsKids;

   person1.SetNumKids(personsKids);
   cout << "Kids: " << personsKids << endl;
   cout << "New baby, kids now: ";
   person1.IncNumKids(); // incrementing the number of kids by 1
   cout << person1.GetNumKids() << endl; // returning new number of kids

   return 0;
}
