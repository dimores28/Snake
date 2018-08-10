#include "Snake.h"



Snake::Snake()
{
}

Snake::Snake(Point tail, int lenght, Direction _direction)
{
	direction = _direction;
	for (int i = 0; i <= lenght; ++i)
	{
		Point p = Point(tail);
		p.Move(i, direction);
		vec.push_back(p);
		
	}
}


Snake::~Snake()
{
}

void Snake::Move()
{
	Point tail = vec.front();
	vec.erase(vec.begin());
	Point head = GetNextPoint();
	vec.push_back(head);

	tail.Clear();
	head.Draw();
}

Point Snake::GetNextPoint()
{
	Point head = vec.back();
	Point nextPoint = Point(head);
	nextPoint.Move(1, direction);
	return nextPoint;
}
