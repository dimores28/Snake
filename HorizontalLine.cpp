#include "HorizontalLine.h"


HorizontalLine::HorizontalLine()
{
}

HorizontalLine::HorizontalLine(int xLeft, int xRight, int y, char sym)
{
	Point p;
	for (int x = xLeft; x <= xRight; ++x)
	{
		p = Point(x, y, sym);
		vec.push_back(p);
	}
}

HorizontalLine::~HorizontalLine()
{
	
}

