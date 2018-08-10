#define _CRT_SECURE_NO_WARNINGS_GLOBALS
#include <time.h>
#include <windows.h>
#include <algorithm>
#include "Point.h"
#include "HorizontalLine.h"
#include "VerticalLine.h"
#include "Snake.h"


int main()
{
	HorizontalLine upLine(0, 78, 0, '+');
	HorizontalLine downLine(0, 78, 24, '+');
	VerticalLine leftLine(0, 24, 0, '+');
	VerticalLine rightLine(0, 24, 78, '+');

	upLine.Draw();
	downLine.Draw();
	leftLine.Draw();
	rightLine.Draw();

	Point p(10, 10, '*');
	Snake sn(p, 4, RIGHT);
	sn.Draw();

	for (int i = 0; i <= 10; ++i)
	{
		sn.Move();
		Sleep(1000);
	}
	

	
	return 0;
}
