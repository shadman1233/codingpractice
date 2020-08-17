#include <iostream>
using namespace std;

int main() {
  int arrowBaseHeight;
  int arrowBaseWidth;
  int arrowHeadWidth;
  int arrowHeadHeight;

  cout << "Enter arrow base height:" << endl;
  cin >> arrowBaseHeight;

  cout << "Enter arrow base width:" << endl;
  cin >> arrowBaseWidth;

  cout << "Enter arrow head width:" << endl;
  cin >> arrowHeadWidth;

  while (arrowHeadWidth <= arrowBaseWidth) {
     cout << "Enter arrow head width:" << endl;
     cin >> arrowHeadWidth;
     cout << endl;
  }
  cout << endl;

  for (int i = 1; i <= arrowBaseHeight; ++i) {
     for (int j = 1; j <= arrowBaseWidth; ++j) {
        cout << "*";
     }
     cout << endl;
  }

  arrowHeadHeight = arrowHeadWidth; // used to differentiate the height from width in the nested for loops

  for (int k = 1; k <= arrowHeadHeight; ++k) {
     for (int l = 1; l <= arrowHeadWidth; ++l) {
        cout << "*";
     }
     arrowHeadWidth -= 1;
     cout << endl;
  }

  return 0;

}
