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

    void insertHead(int val) {
      Node newHead = new Node(val);
      Node oldHead = this->head;
      this->head = newHead;
      this->head->next = oldHead;
    };
    // insert
    // delete
    // forEach
    // insert before
    // insert after
};