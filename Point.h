#pragma once
class Point
{
private:
 int x;
 int y;
 char sym;

public:
	Point();
	Point(int _x, int _y, char _sym): x(_x), y(_y), sym(_sym){}
	~Point();

	void Draw();
};

