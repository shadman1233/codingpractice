#include <iostream>
#include <string> // used to access the string library
// #include <cctype> // used for checking character types like isdigit, ischar, isalpha, etc

using namespace std;

int main() {
  string password;
  string newpass;

  cin >> password;

  newpass = password;

  for (unsigned int i = 0; i < password.size(); ++i) {
    if (password.at(i) == 'i') {
      newpass = password.replace(i, 1, "!");
    }
    if (password.at(i) == 'a') {
      newpass = password.replace(i, 1, "@");
    }
    if (password.at(i) == 'm') {
      newpass = password.replace(i, 1, "M");
    }
    if (password.at(i) == 'B') {
      newpass = password.replace(i, 1, "8");
    }
    if (password.at(i) == 'o') {
      newpass = password.replace(i, 1, ".");
    }
  }

  newpass += "q*s";

  cout << newpass << endl;

  return 0;

}
