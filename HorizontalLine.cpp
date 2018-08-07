#include "HorizontalLine.h"
#include <iostream>



HorizontalLine::HorizontalLine()
{
	vec.push_back(Point(0, 0, '.'));
}

HorizontalLine::HorizontalLine(int xLeft, int xRight, int y, char sym)
{
	for (int x = xLeft; x <= xRight; ++x)
	{
		vec.push_back(Point(x,y,sym));
	}
}


HorizontalLine::~HorizontalLine()
{
}

void HorizontalLine::Darw()
{
	if (vec.size() > 0)
	{
		for (auto a : vec)
		{
			a.Draw();
		}
	}
	else
	{
		cout << "Debil zadai razmer linii\n";
	}
	
}
