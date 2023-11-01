#include "Node.h"


State Node::getState() const {
	return m_state;
}


std::vector<Node*>& Node::getChildren() {
	return m_children;
}


//Node& Node::getRandomChild() {
//	Node node;
//
//	return node;
//}
