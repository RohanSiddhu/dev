// main.cpp : Defines the entry point for the application.
//

#include <iostream>
#include <cstdlib>

#include "mcts.h"
#include "Board.h"


int main()
{
	std::cout << "Hello CMake." << std::endl;

	Board board;

	Player player = Player::One;
	while (true) {
		std::cout << "Board:\n";
		board.print();
		std::cout << "\nEmpty Positions:\n";
		for (Position pos : board.getEmptyPositions()) {
			std::cout << "(" << pos.getX() << ", " << pos.getY() << "), ";
		}
		std::cout << "\b\b \n" << std::endl << ">>> ";

		int x, y;
		std::cin >> x >> y;
		board.move(player, Position(x, y));
		player = player == Player::One ? Player::Two : Player::One; 
		if (board.win()) {
			std::cout << "\n Game Over!!!\n";
			break;
		}
	}

	return EXIT_SUCCESS;
}
