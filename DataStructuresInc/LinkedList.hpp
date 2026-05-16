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
    void removeHead();
    void insertTail(int val);
    void insertAfter(int target, int val);
    void deleteAfter(int target);
    void forEach(void (*fn)(int));
    void insertBefore(int target, int val);
    void deleteBefore(int target);
};

#endif // LINKEDLIST_HPP