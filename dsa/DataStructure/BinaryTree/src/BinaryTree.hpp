#pragma once

#include <iostream>
#include <stdexcept>


// Binary Tree Structure

struct BTreeStruct {
    BTreeStruct* leftChild;
    int data;
    BTreeStruct* rightChild;
};


// Binary Tree Class

class BTree {
private:
    BTreeStruct* root;
public:
    BTree() {
        root = nullptr;
    }

    void insert(int num);
    void preorder() const;
    void inorder() const;
    void postorder() const;
private:
    void insert_rec(BTreeStruct** tree, int num);
    void preorder_rec(BTreeStruct* tree) const;
    void inorder_rec(BTreeStruct* tree) const;
    void postorder_rec(BTreeStruct* tree) const;
};


// Public functions

void BTree::insert(int num) {
    insert_rec(&root, num);
}


void BTree::preorder() const {
    std::cout << "Preorder Traversal" << std::endl;
    preorder_rec(root);
}


void BTree::inorder() const {
    std::cout << "Inorder Traversal" << std::endl;
    inorder_rec(root);
}


void BTree::postorder() const {
    std::cout << "Postorder Traversal" << std::endl;
    postorder_rec(root);
}


// Private Functions.

void BTree::insert_rec(BTreeStruct** tree, int num) {
    if (*tree == nullptr) {
        try {
            *tree = new BTreeStruct;
        }
        catch (std::exception& error) {
            std::cout << error.what() \
                << ": Memory Allocation Failed" << std::endl;
            return;
        }
        
        (*tree)->data = num;
        (*tree)->leftChild = nullptr;
        (*tree)->rightChild = nullptr;
    }
    else {
        if (num < ((*tree)->data)) {
            insert_rec(&((*tree)->leftChild), num);
        }
        else {
            insert_rec(&((*tree)->rightChild), num);
        }
    }
}


void BTree::preorder_rec(BTreeStruct* tree) const {

}


void BTree::inorder_rec(BTreeStruct* tree) const {
    if (tree != nullptr) {
        inorder_rec(tree->leftChild);

        std::cout << tree->data << " ";

        inorder_rec(tree->rightChild);
    }
    else {
        return;
    }
}


void BTree::postorder_rec(BTreeStruct* tree) const {

}
