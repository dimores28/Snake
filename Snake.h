#pragma once
#include <vector>
#include "Point.h"
#include "Figure.h"

using namespace std;

class Snake : public Figure
{
private:
	Direction direction;

public:
	Snake();
	Snake(Point tail, int lenght, Direction _direction);
	~Snake();

	void Move();
	Point GetNextPoint();
};

