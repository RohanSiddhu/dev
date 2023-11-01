#include "mcts.h"


double MonteCarloTreeSearch::uct(int totalVisit, double nodeWinScore, int nodeVisit) const {
	if (nodeVisit == 0) return INT_MAX;
	return (nodeWinScore / nodeVisit) * 2 * std::sqrt(std::log(totalVisit) / nodeVisit);
}


Node& MonteCarloTreeSearch::findBestNodeWithUCT(Node& node) {
	int parentVisit = node.getState().getVisitCount();
	
	Node* bestNode = node.getChildren()[0];
	double bestUct = uct(parentVisit, bestNode->getState().getWinScore(), bestNode->getState().getVisitCount());
	for (Node* n : node.getChildren()) {
		double currentUct = uct(parentVisit, n->getState().getWinScore(), n->getState().getVisitCount());
		if (bestUct < currentUct) {
			bestUct = currentUct;
			bestNode = n;
		}
	}

	return *bestNode;
}


Node& MonteCarloTreeSearch::select(Node& rootNode) {
	Node node = rootNode;
	while (node.getChildren().size() != 0) {
		node = findBestNodeWithUCT(node);
	}

	return node;
}


void MonteCarloTreeSearch::expand(Node& node) {
	std::vector<State> possibleStates = node.getState().getAllPossibleStates();
	for (State& state : possibleStates) {
		Node newNode(state, &node);
		newNode.getState().setPlayer(node.getState().getPlayer() == Player::One ? Player::Two : Player::One);
		node.getChildren().emplace_back(newNode);
	}
}
