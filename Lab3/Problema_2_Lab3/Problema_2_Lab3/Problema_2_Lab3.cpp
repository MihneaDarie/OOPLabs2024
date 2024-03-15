#include <stdio.h>
#include "Canvas.h"
#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	Canvas a(200, 70);
	
	a.DrawCircle(100, 10, 6, '*');///capul

	a.SetPoint(97, 10, '*'); a.SetPoint(103, 10, '*');/// ochii

	a.DrawLine(100, 16, 100, 27, '*');/// abdomen
	
	a.DrawLine(100, 27, 93, 34, '*'); /// membre
	a.DrawLine(100, 27, 107, 34, '*');
	a.DrawLine(100, 20, 85, 10, '*');
	a.DrawLine(100, 20, 115, 10, '*');

	a.FillCircle(50, 40, 5, 219); ///minge de football

	a.DrawRect(20, 10, 40, 20, 219);
	a.FillRect(20, 20, 40, 50,219);///cutii

	a.Print();
	a.Clear();
}