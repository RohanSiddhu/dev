#pragma once


class Position {
protected:
	int x;
	int y;

public:
	Position() : x(0), y(0) {}
	
	Position(int x, int y) : x(x), y(y) {}

	int getX() { return x; }

	void setX(int x) { this->x = x; }

	int getY() { return y; }

	void setY(int y) { this->y = y; }
};
