#pragma once

#include <vector>

#include "Board.h"


class State {
private:
	Board m_board;
	Player m_player;
	int m_visitCount;
	double m_winScore;

public:
	State() : m_board(), m_player(Player::One), m_visitCount(0), m_winScore(0.0F) {}

	State(Board board, Player player):
		m_board(board), m_player(player), m_visitCount(0), m_winScore(0) {}

	Board& getBoard();
	void setBoard(Board& board);
	Player getPlayer() const;
	void setPlayer(Player player);
	int getVisitCount() const;
	double getWinScore() const;
	std::vector<State> getAllPossibleStates() const;
};
