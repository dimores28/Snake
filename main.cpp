#define _CRT_SECURE_NO_WARNINGS_GLOBALS
#include <time.h>
#include <windows.h>
#include <algorithm>
#include <conio.h>
#include "Point.h"
#include "HorizontalLine.h"
#include "VerticalLine.h"
#include "Snake.h"
#include "FoodCreator.h"
#include "Walls.h"


int main()
{
	

	
	Walls walls = Walls(80, 25);
	walls.Draw();


	Point p(10, 10, '*');
	Snake sn(p, 4, RIGHT);
	sn.Draw();


	FoodCreator foodCreator = FoodCreator(80, 25, '$');
	Point food = foodCreator.CreateFood();
	food.Draw();
	
	
	while (true)
	{
		if (walls.IsHit(sn) || sn.IsHitTail()) break;
		if (sn.Eat(food))
		{
		    food = foodCreator.CreateFood();
			food.Draw();
		}
		else
		{
			sn.Move();
		}

		if (_kbhit()) {
			sn.HandleKay(_getch());
		}

		Sleep(200);
		sn.Move();
	}

	
	

	return 0;
}
