#pragma once

#include <vector>

#include "State.h"


class Node {
private:
	State m_state;
	Node* m_parent;
	std::vector<Node*> m_children;

public:
	Node() : m_state(), m_parent(nullptr), m_children() {}

	Node(State state, Node* parent) :
		m_state(state), m_parent(parent), m_children() {}

	State getState() const;
	std::vector<Node*>& getChildren();
	//Node& getRandomChild();
};
