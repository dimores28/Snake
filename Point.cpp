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

	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(consoleHandle, &info);

	cout << sym;


}

void Point::Move(int offset,Direction direction)
{
	switch (direction)
	{
	case RIGHT: x += offset; break;
	case LEFT:  x -= offset; break;
	case UP:    y -= offset; break;
	case DOWN:  y += offset; break;
	}
}

void Point::Clear()
{
	sym = ' ';
	Draw();
}

bool Point::IsHit(Point  _p)
{
	return _p.x == x && _p.y == y;
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
