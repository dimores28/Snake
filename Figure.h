#pragma once
#include <iostream>
#include <vector>
#include "Point.h"

using namespace std;
class Figure
{
protected:
	vector<Point> vec;
public:
	Figure();
	~Figure();

	void Draw();
	bool IsHit(Figure _figure);
	bool IsHit(Point _point);
};

