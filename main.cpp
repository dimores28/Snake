#define _CRT_SECURE_NO_WARNINGS_GLOBALS
#include <iostream>
#include <time.h>
#include <windows.h>
#include "Point.h"
using namespace std;


int main()
{
	
	Point p1 = { 15,15,'#' };

	p1.Draw();

	return 0;
}
