#include <iostream>
#include <string>
#include <vector>
using namespace std;

string RemoveSpaces(string userString) {
   string SpacesRemoved = "";
   vector<string> SentenceChunks; // vector to hold chunks of sentence as the userString is parsed
   int prevSpacePosition = -1; // holds the index of the previous space position

   for (unsigned int i = 0; i < userString.size(); ++i) {
      if (userString.at(i) == ' ') {
         SentenceChunks.push_back( userString.substr(prevSpacePosition + 1, i - (prevSpacePosition + 1)) );
         prevSpacePosition = i; // update previous space position
      }
      else if (i == userString.size() - 1) {
         SentenceChunks.push_back( userString.substr(prevSpacePosition + 1, i + 1 - (prevSpacePosition + 1)) );
      }
   }

   for (unsigned int i = 0; i < SentenceChunks.size(); ++i) {
      SpacesRemoved += SentenceChunks.at(i);
   }

   if (SentenceChunks.size() < 1) {
      SpacesRemoved = userString; // return original string is no spaces were found
   }

   return SpacesRemoved;
}

int main() {
   string givenString;
   getline(cin, givenString);

   cout << RemoveSpaces(givenString) << endl;

   return 0;
}

// Below is an alternate, faster solution for this problem of removing spaces:

// #include <iostream>
// #include <algorithm>
// using namespace std;
//
// // Function to remove all spaces from a given string
// string RemoveSpaces(string str)
// {
//     str.erase(remove(str.begin(), str.end(), ' '), str.end());
//     return str;
// }
//
// // Driver program to test above function
// int main()
// {
//     string str;
//     getline(cin,str);
//
//     cout << RemoveSpaces(str) << endl;
//
//     return 0;
// }

// Even more efficient process to remove spaces:

// #include <iostream>
// using namespace std;
//
// // Function to remove all spaces from a given string
// void removeSpaces(char *str)
// {
//     // To keep track of non-space character count
//     int count = 0;
//
//     // Traverse the given string. If current character
//     // is not space, then place it at index 'count++'
//     for (int i = 0; str[i]; i++)
//         if (str[i] != ' ')
//             str[count++] = str[i]; // here count is
//                                    // incremented
//     str[count] = '\0';
// }
//
// // Driver program to test above function
// int main()
// {
//     char str[] = "g  eeks   for ge  eeks  ";
//     removeSpaces(str);
//     cout << str;
//     return 0;
// }
