#pragma once
#include "Point.h"
class FoodCreator
{
private:
	int mapWidht;
	int mapHeight;
	char sym;
public:
	FoodCreator() = delete;
	~FoodCreator();
	FoodCreator(int _mapWidht, int _mapHeight, char _sym);


	Point CreateFood();

};

