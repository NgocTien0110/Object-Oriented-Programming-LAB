#include "Circle.h"

HinhTron::HinhTron() :Shape(), radius(0) {}
HinhTron::HinhTron(const double& radius):Shape()
{
	this->radius = abs(radius);
}
HinhTron::~HinhTron()  {}

double HinhTron::getArea()
{
	return PI * radius * radius;
}

double HinhTron::getCirc()
{
	return 2 * PI * radius;
}