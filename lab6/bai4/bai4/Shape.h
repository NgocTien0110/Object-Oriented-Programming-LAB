#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
public:
	Shape();
	virtual ~Shape();
	
	virtual double getArea() = 0;
	virtual double getCirc() = 0;
};

