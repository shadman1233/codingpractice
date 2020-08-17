// g++ --std=c++11 file1.cpp file2.cpp etc. (use this to compile .cpp files)
// once compiled, it will generate an executable file like a.out or a.o
// run the file using ./a.out OR ./a.o

#include <iostream>
#include "ContactNode.h"
using namespace std;

int main() {
   // initialize all pointers

   ContactNode* headNode = nullptr;
   ContactNode* node1 = nullptr;
   ContactNode* node2 = nullptr;
   ContactNode* node3 = nullptr;
   ContactNode* currNode = nullptr;

   string inputName;
   string inputPhoneNum;

   headNode = new ContactNode();

   cout << "Person 1" << endl << "Enter name:" << endl;
   getline(cin, inputName);
   cout << "Enter phone number:" << endl;
   cin >> inputPhoneNum;
   cout << "You entered: " << inputName << ", " << inputPhoneNum << endl << endl;

   node1 = new ContactNode(inputName, inputPhoneNum);
   headNode->InsertAfter(node1);

   cout << "Person 2" << endl << "Enter name:" << endl;
   cin.ignore();
   getline(cin, inputName);
   cout << "Enter phone number:" << endl;
   cin >> inputPhoneNum;
   cout << "You entered: " << inputName << ", " << inputPhoneNum << endl << endl;

   node2 = new ContactNode(inputName, inputPhoneNum);
   node1->InsertAfter(node2);

   cout << "Person 3" << endl << "Enter name:" << endl;
   cin.ignore();
   getline(cin, inputName);
   cout << "Enter phone number:" << endl;
   cin >> inputPhoneNum;
   cout << "You entered: " << inputName << ", " << inputPhoneNum << endl << endl;

   node3 = new ContactNode(inputName, inputPhoneNum);
   node2->InsertAfter(node3);

   currNode = node1;

   cout << "CONTACT LIST" << endl;
   while (currNode != nullptr) {
      currNode->PrintContactNode();
      cout << endl;
      currNode = currNode->GetNext();
   }

   return 0;
}
