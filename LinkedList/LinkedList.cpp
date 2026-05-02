#include <iostream>
#include "linkedList.h"

class LinkedList {
  private: 
    struct Node {
      Node(int v) : val(v), next(nullptr) {};
      int val;
      Node* next;
    }
    Node* head;
  public:
    LinkedList() : head(nullptr) {};
    // insert
    // delete
    // forEach
    // insert before
    // insert after
};