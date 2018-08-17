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

void Snake::SetDirection(Direction _dr)
{
	direction = _dr;
}

Direction Snake::GetDirection()
{
	return direction;
}

void Snake::HandleKay(int _key)
{
	switch (_key)
	{
		case 97:  case 75: SetDirection(LEFT);  break;
		case 100: case 77: SetDirection(RIGHT); break;
		case 115: case 80: SetDirection(DOWN);  break;
		case 119: case 72: SetDirection(UP);    break;
	}

}

bool Snake::Eat(Point _food)
{
	Point head = GetNextPoint();

	if (head.IsHit(_food))
	{
		_food.SetSym(head.GetSym());
		vec.push_back(_food);
		return true;
	}
	else
	{
		return false;
	}
	
}

bool Snake::IsHitTail()
{
	auto head = vec.front();

	for (int i = 1; i < vec.size(); ++i)
	{
		if (head.IsHit(vec[i])) return true;
	}
	return false;
}
