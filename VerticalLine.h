#pragma once
#include <vector>
#include "Point.h"
#include "Figure.h"

class VerticalLine :public Figure
{

public:
	VerticalLine()
	{
		vec.push_back(Point(0, 0, '.'));
	}
	VerticalLine(int yBottom,int yTop,int x, char sym);
	~VerticalLine();

};

