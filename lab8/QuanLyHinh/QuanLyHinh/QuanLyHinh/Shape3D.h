#pragma once
#include "Shape.h"
#include <iostream>
#include <cmath>
using namespace std;

class Shape3D :public Shape
{
public:
	Shape3D();
	virtual ~Shape3D();

	virtual double getArea() = 0;
	virtual double getVolume() = 0;
};

