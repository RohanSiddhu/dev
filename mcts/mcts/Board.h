#pragma once

#include <iostream>
#include <cstring>
#include <vector>

#include "Position.h"


enum class Player {
	One = -1,
	Two = 1
};


class Board {
private:
	int m_values[3][3];
	int m_totalMoves;

public:
	Board() : m_values(), m_totalMoves(0) {}

	void print() const;
	void move(Player player, Position pos);
	int win() const;
	std::vector<Position> getEmptyPositions() const;
};
