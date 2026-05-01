#include <iostream>
#include <vector>
#include <conio.h>
#include <windows.h>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <file1> <file2> ..." << std::endl;
        return 1;
    }
    std::cout << "Files to process:" << std::endl;
    return 0;
};