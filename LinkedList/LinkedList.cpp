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

void LinkedList::insertTail(int val) {
  Node* node = this->head.get();
  while(node != nullptr) {
    if (node->next == nullptr) {
      node->next = std::make_unique<Node>(val);
      return;
    }
    node = node->next.get();
  }
};

void LinkedList::insertAfter(int target, int val) {
  Node* node = this->head.get();
  while(node != nullptr) {
    if (node->val == target) {
      std::unique_ptr<Node> newNode = std::make_unique<Node>(val);
      std::unique_ptr<Node> tmp = std::move(node->next);
      node->next = std::move(newNode);
      node->next->next = std::move(tmp);
      return;
    }
    node = node->next.get();
  }
};

void LinkedList::deleteAfter(int target) {
  Node* node = this->head.get();
  while(node != nullptr) {
    if (node->val == target) {
      if (node->next != nullptr) {
        node->next = std::move(node->next->next);
      }
      return;
    }
    node = node->next.get();
  }
};

void LinkedList::forEach(void (*fn)(int)) {
  Node* node = this->head.get();
  while(node != nullptr) {
    fn(node->val);
    node = node->next.get();
  }
};