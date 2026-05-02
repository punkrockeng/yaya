#include <iostream>
#include "LinkedList.hpp"

LinkedList::LinkedList() : head(nullptr) {
  std::cout << "Created Linked List! Happy Hunting.." << std::endl;
};

LinkedList::~LinkedList() {
  while(head != nullptr) {
    head = std::move(head->next);
  }
};

void LinkedList::insertHead(int val) {
  auto newHead = std::make_unique<Node>(val);
  newHead->next = std::move(this->head);
  this->head = std::move(newHead);
};

// LinkedList::insertTail(int val) {
//   Node* node = this->head;
//   while(node) {
//     if (node->next == nullptr) {
//       node->next = new Node(val);
//       return;
//     }
//     node = node->next;
//   }
// };