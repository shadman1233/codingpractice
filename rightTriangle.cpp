#include <iostream>
using namespace std;

int main() {
  char triangleChar;
  int triangleHeight;

  cout << "Enter a character:" << endl;
  cin >> triangleChar;

  cout << "Enter triangle height:" << endl;
  cin >> triangleHeight;
  cout << endl;

  for (int i = 1; i <= triangleHeight; ++i) {
    for (int j = 1; j <= i; ++j) {
      cout << triangleChar << " ";
    }
    cout << endl;
  }

   return 0;

}
