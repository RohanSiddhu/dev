#include "State.h"


void State::setBoard(Board& board) {
	m_board = board;
}


Player State::getPlayer() const {
	return m_player;
}


void State::setPlayer(Player player) {
	m_player = player;
}


Board& State::getBoard() {
	return m_board;
}


int State::getVisitCount() const {
	return m_visitCount;
}


double State::getWinScore() const {
	return m_winScore;
}


std::vector<State> State::getAllPossibleStates() const {
	std::vector<State> possibleStates;
	std::vector<Position> availablePositions = m_board.getEmptyPositions();

	for (Position pos : availablePositions) {
		State newState(m_board, (m_player == Player::One ? Player::Two : Player::One));
		newState.getBoard().move(newState.getPlayer(), pos);
		possibleStates.emplace_back(newState);
	}

	return possibleStates;
}
