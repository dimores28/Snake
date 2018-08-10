#pragma once
#include "Point.h"
#include "Figure.h"


class HorizontalLine : public Figure
{
public:
	HorizontalLine();
	HorizontalLine(int xLeft,int xRight, int y, char sym);

	~HorizontalLine();

};

