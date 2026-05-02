#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

class LinkedList {
  private:
    struct Node;
    Node* head;
  public:
    LinkedList();
    ~LinkedList();

    void insertHead(int val);
    void insertTail(int val);
};

#endif // LINKED_LIST_HPP