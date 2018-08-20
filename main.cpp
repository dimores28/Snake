#define _CRT_SECURE_NO_WARNINGS_GLOBALS
#include <time.h>
#include <windows.h>
#include <algorithm>
#include <conio.h>
#include "Snake.h"
#include "FoodCreator.h"
#include "Walls.h"

void GameOver();


int main()
{
	
	setlocale(LC_ALL, "Russian");
	
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
		if (walls.IsHit(sn) || sn.IsHitTail()) 
		{
			GameOver();
			break;
		}
			

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


void GameOver()
{
	//DWORD l;
	COORD position;
	position.X = 25;
	position.Y = 10;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	//FillConsoleOutputAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15, 102, position, &l);
	CONSOLE_CURSOR_INFO cursorInfo;

	cout << "\n====================================\n";
	cout << "         ÈÃÐÀ ÎÊÎÍ×ÅÍÀ\n";
	cout << "====================================\n";

	cursorInfo.bVisible = false;
	cursorInfo.dwSize = 1;


}
