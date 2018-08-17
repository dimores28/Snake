#pragma once
#include "Figure.h"
class Walls
{
private:
	vector<Figure> wallList;
public:
	Walls() = delete;
	Walls(int _mapWidth, int _mapHeight);
	~Walls();

	bool IsHit(Figure _figure);
	void Draw();

};

