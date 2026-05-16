#include <iostream>
#include "LinkedList.hpp"

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cout << "Oopsie, you forgot to specify a data structure to test!" << std::endl;
    return 1;
  }

  if (strcmp(argv[1], "LinkedList") == 0) {
    std::cout << "Creating Linked List..." << std::endl;
    std::unique_ptr<LinkedList> linkedList = std::make_unique<LinkedList>();
    return 1;
  }
  std::cout << "Files to process:" << std::endl;
  return 0;
};