#pragma once

enum Direction { LEFT, RIGHT, UP, DOWN };

class Point
{
private:
 int x;
 int y;
 char sym;

public:
	Point();
	Point(int _x, int _y, char _sym): x(_x), y(_y), sym(_sym){}
	Point(const Point &p);
	~Point();

	void Draw();
	void Move(int offset, Direction direction);
	void Clear();
	bool IsHit(Point _p);

	void SetX(int _x);
	int GetX();

	void SetY(int _y);
	int GetY();

	void SetSym(char _sym);
	char GetSym();

};

