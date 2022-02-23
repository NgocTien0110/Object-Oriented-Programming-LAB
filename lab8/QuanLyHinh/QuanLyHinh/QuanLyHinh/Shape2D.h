#pragma once
#include "Shape.h"
#include <iostream>
#include <cmath>
using namespace std;

class Shape2D:public Shape
{
public:
	Shape2D();
	virtual ~Shape2D();

	virtual double getArea() = 0;
	virtual double getCirc() = 0;
};

