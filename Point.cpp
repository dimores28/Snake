#include "Point.h"
#include <iostream>
#include <Windows.h>

using namespace std;



Point::Point()
{
	x = y = 0;
	sym = '*';
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
