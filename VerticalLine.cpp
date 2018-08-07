#include "VerticalLine.h"



VerticalLine::VerticalLine(int yBottom, int yTop, int x, char sym)
{
	for (int y = yBottom; y <= yTop; ++y)
	{
		vec.push_back(Point(x, y, sym));
	}
}

VerticalLine::~VerticalLine()
{
}

void VerticalLine::Draw()
{
	for (auto i : vec)
	{
		i.Draw();
	}
}
