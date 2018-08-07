#define _CRT_SECURE_NO_WARNINGS_GLOBALS
#include <iostream>
#include <time.h>
#include <windows.h>
#include <algorithm>
#include "Point.h"
#include "HorizontalLine.h"
#include "VerticalLine.h"
using namespace std;


int main()
{
	
	HorizontalLine lh;
	VerticalLine vl;

	vl.Draw();
	lh.Darw();
	return 0;
}
