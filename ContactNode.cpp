#include <iostream>
#include "ContactNode.h"
using namespace std;

ContactNode::ContactNode(string contactName, string contactPhoneNum, ContactNode* nextNodeLoc) {
   this->contactName = contactName;
   this->contactPhoneNum = contactPhoneNum;
   this->nextNodePtr = nextNodeLoc;
}

// ContactNode::~ContactNode() {
//    delete nextNodePtr; // deleting memory allocated to nextNodePtr (private data member) when a ContactNode object is destroyed
// }
//
// ContactNode(const ContactNode& origContactNode) {
//    nextNodePtr = new ContactNode;
//    *nextNodePtr = *(origContactNode.nextNodePtr); // copying nextNodePtr of original node to new node
//    // also copy the name and phone number data members?
// }
//
// ContactNode&  operator=(const ContactNode& origContactNode) {
//    if (this != &origContactNode) {                   // 1. Don't self-assign
//       delete nextNodePtr;                            // 2. Delete old dataObject
//       nextNodePtr = new ContactNode;                 // 3. Allocate new dataObject
//       *nextNodePtr = *(origContactNode.nextNodePtr); // 4. Copy dataObject
//    }
//
//    return *this; // derefences this->ContactNode object so it can be returned
// }

string ContactNode::GetName() {
   return this->contactName;
}

string ContactNode::GetPhoneNumber() {
   return this->contactPhoneNum;
}

void ContactNode::PrintContactNode() {
   cout << "Name: " << this->contactName << endl;
   cout << "Phone number: " << this->contactPhoneNum << endl;
}

void ContactNode::InsertAfter(ContactNode* newNodePtr) {
   ContactNode* tmpNext = nullptr;

   tmpNext = this->nextNodePtr;
   this->nextNodePtr = newNodePtr;
   newNodePtr->nextNodePtr = tmpNext;
}

ContactNode* ContactNode::GetNext() {
   return this->nextNodePtr;
}
