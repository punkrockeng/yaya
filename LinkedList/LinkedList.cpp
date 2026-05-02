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

    void insertTail(int val) {
      Node* node = this->head;
      while(node) {
        if (node->next == nullptr) {
          node->next = new Node(val);
          return;
        }
        node = node->next;
      }
    };
    // insert
    // delete
    // forEach
    // insert before
    // insert after
};