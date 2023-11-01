# include "Board.h"


void Board::print() const {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			std::cout << m_values[i][j] << " ";
		}
		std::cout << std::endl;
	}
}


void Board::move(Player player, Position pos) {
	m_totalMoves++;
	m_values[pos.getX()][pos.getY()] = (int)player;
}


int Board::win() const {
	int row = 0;
	int col = 0;
	int diagonal1 = 0;
	int diagonal2 = 0;

	diagonal1 = m_values[0][0] + m_values[1][1] + m_values[2][2];
	diagonal2 = m_values[0][2] + m_values[1][1] + m_values[2][0];

	if (diagonal1 == 3 || diagonal2 == 3) return 1;
	else if (diagonal1 == -3 || diagonal2 == -3) return -1;

	for (int i = 0; i < 3; i++) {
		row = m_values[i][0] + m_values[i][1] + m_values[i][2];
		col = m_values[0][i] + m_values[1][i] + m_values[2][i];

		if (row == 3 || col == 3) return 1;
		else if (row == -3 || col == -3) return -1;
	}

	if (m_totalMoves == 9) return 2;

	return 0;
}


std::vector<Position> Board::getEmptyPositions() const {
	std::vector<Position> emptyPositions;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (m_values[i][j] == 0) {
				emptyPositions.emplace_back(Position(i, j));
			}
		}
	}

	return emptyPositions;
}
