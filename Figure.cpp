#include "Figure.h"



Figure::Figure()
{
}


Figure::~Figure()
{
}

void Figure::Draw()
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

bool Figure::IsHit(Figure _figure)
{
	for (auto p : vec)
	{
		if (_figure.IsHit(p)) return true;
	}
	return false;
}

bool Figure::IsHit(Point _point)
{
	for (auto p : vec)
	{
		if (_point.IsHit(p)) return true;
	}
	return false;
}
