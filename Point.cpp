#include "Point.h"
#include <iostream>
#include <Windows.h>

using namespace std;



Point::Point()
{
	x = y = 0;
	sym = '*';
}


Point::Point(const Point & p)
{
	x = p.x;
	y = p.y;
	sym = p.sym;
}

Point::~Point()
{
}

void Point::Draw()
{
	// Объявление необходимой структуры
	COORD position;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	//
	position.X = x;
	position.Y = y;
	SetConsoleCursorPosition(hConsole, position);		// Перемещение каретки по задан

	cout << sym;


}

void Point::Move(int offset,Direction direction)
{
	if (direction == RIGHT)
	{
		x = x + offset;
	}
	else if (direction == LEFT)
	{
		x = x - offset;
	}

	if (direction == UP)
	{
		y = y + offset;
	}
	else if (direction == DOWN)
	{
		y = y - offset;
	}
}

void Point::Clear()
{
	sym = ' ';
	Draw();
}

void Point::SetX(int _x)
{
	x = _x;
}

int Point::GetX()
{
	return x;
}

void Point::SetY(int _y)
{
	y = _y;
}

int Point::GetY()
{
	return y;
}

void Point::SetSym(char _sym)
{
	sym = _sym;
}

char Point::GetSym()
{
	return sym;
}
