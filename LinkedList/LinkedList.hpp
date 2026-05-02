#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

class LinkedList {
  private:
    struct Node {
      Node(int v) : val(v), next(nullptr) {};
      int val;
      std::unique_ptr<Node> next;
    };
    std::unique_ptr<Node> head;
  public:
    LinkedList();
    ~LinkedList();

    void insertHead(int val);
    void insertTail(int val);

    // insert
    // delete
    // forEach
    // insert before
    // insert after
};

#endif // LINKEDLIST_HPP