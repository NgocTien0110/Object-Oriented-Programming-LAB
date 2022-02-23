#pragma once
#include "Shape.h"
#define PI 3.14159

class HinhTron: public Shape
{
private:
	double radius;
public:
	HinhTron();
	HinhTron(const double& radius);
	~HinhTron();

	double getArea();
	double getCirc();
};