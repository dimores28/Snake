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
