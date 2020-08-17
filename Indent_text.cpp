#include <iostream>
using namespace std;

int main() {
    int userNum;
    int i;
    int j;

    cin >> userNum;

    for (i = 0; i <= userNum; ++i) {
        if (i == 0) {
            cout << "0" << endl;
       }
        else {
            for (j = 1; j <= i; ++j) {
                cout << " ";
           }
            cout << i << endl;
       }
   }
   return 0;
}
