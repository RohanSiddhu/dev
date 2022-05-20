#include "BinaryTree.hpp"

constexpr int SIZE = 10;

int main(int argc, const char** argv) {
    std::cout << "Binary Tree" << std::endl;

    BTree bTree;
    int arr[SIZE] = {20, 17, 6, 8, 10, 7, 18, 13, 12, 5};

    for (int i = 0; i < SIZE; i++) {
        bTree.insert(arr[i]);
    }

    bTree.inorder();

    std::cin.get();
    return 0;
}
