#pragma once

#include <cmath>
#include <climits>

#include "Tree.h"
#include "Board.h"


class MonteCarloTreeSearch {
public:
	static const int WIN_SCORE = 10;
	int level;
	int opponent;


public:
	Board& search(Board board, Player player) {
		Tree tree = Tree();
		Node rootNode = tree.getRoot();
		rootNode.getState().setBoard(board);
		rootNode.getState().setPlayer(player);

		for (int i = 0; i < 1000; i++) {
			// Step 1: Selection
			Node current = select(rootNode);
			// Step 2: Expansion
			if (!current.getState().getBoard().win() && current.getState().getVisitCount() != 0)
				expand(current);

			// Step 3: Simulation
			/*if (current.getChildren().size() != 0) {
				current = current.getRandomChild();
			}*/
			//int randomPlayResult = simulateRandomPlay(current);

			// Step 4: Backpropagation
			//backPropagate(current, randomPlayResult);
		}

		// Pick the best move
	}

private:
	Node& select(Node& node);
	void expand(Node& node);

	double uct(int totalVisit, double nodeWinScore, int nodeVisit) const;
	Node& findBestNodeWithUCT(Node& node);
};
