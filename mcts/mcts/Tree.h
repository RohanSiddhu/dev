#pragma once

#include "Node.h"


class Tree {
private:
	Node* m_root;

public:
	Tree() : m_root(new Node) {}

	Node& getRoot() const;
};