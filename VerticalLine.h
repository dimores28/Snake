#pragma once
#include <vector>
#include "Point.h"

using namespace std;
class VerticalLine
{
private:
	vector<Point> vec;
public:
	VerticalLine()
	{
		vec.push_back(Point(0, 0, '.'));
	}
	VerticalLine(int yBottom,int yTop,int x, char sym);
	~VerticalLine();

	void Draw();
};

