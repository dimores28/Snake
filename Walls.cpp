#include "Walls.h"
#include "HorizontalLine.h"
#include "VerticalLine.h"


Walls::Walls(int _mapWidth, int _mapHeight)
{
	HorizontalLine upLine(0, _mapWidth - 2, 0, '+');
	HorizontalLine downLine(0, _mapWidth - 2, _mapHeight - 1, '+');
	VerticalLine   leftLine(0, _mapHeight - 1, 0, '+');
	VerticalLine   rightLine(0, _mapHeight - 1, _mapWidth - 2, '+');

	wallList.push_back(upLine);
	wallList.push_back(downLine);
	wallList.push_back(leftLine);
	wallList.push_back(rightLine);
}

Walls::~Walls()
{
}

bool Walls::IsHit(Figure _figure)
{

	for (auto wall : wallList)
	{
		if (wall.IsHit(_figure)) return true;
		
	}
	return false;
}

void Walls::Draw()
{
	for (auto wall : wallList)
	{
		wall.Draw();
	}
}
