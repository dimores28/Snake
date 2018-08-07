#pragma once
#include <vector>
#include "Point.h"

using namespace std; 

class HorizontalLine
{
private:
	vector<Point> vec;

public:
	HorizontalLine();
	explicit HorizontalLine(int xLeft,int xRight, int y, char sym);

	~HorizontalLine();

	void Darw();
};

