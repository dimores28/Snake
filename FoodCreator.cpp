#include "FoodCreator.h"
#include <iostream>
#include <time.h>




FoodCreator::~FoodCreator()
{
}

FoodCreator::FoodCreator(int _mapWidht, int _mapHeight, char _sym): mapWidht(_mapWidht), mapHeight(_mapHeight), sym(_sym)
{
}

Point FoodCreator::CreateFood()
{
	srand(time(NULL));
	int tempX = rand() % (mapWidht - 2), tempY = rand() % (mapHeight - 2);
	int x = (tempX <= 0) ? 2 : tempX;
	int y = (tempY <= 0) ? 2 : tempY;

	return Point(x, y, this->sym);
}
