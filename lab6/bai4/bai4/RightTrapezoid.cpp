#include "RightTrapezoid.h"

HinhThangVuong::HinhThangVuong() : Shape(), longEdge(0), shortEdge(0), height(0) {}
HinhThangVuong::HinhThangVuong(const double& longEdge, const double& shortEdge, const double& height) : Shape()
{
	this->longEdge = abs(longEdge);
	this->shortEdge = abs(shortEdge);
	this->height = abs(height);
}
HinhThangVuong::~HinhThangVuong() {}

double HinhThangVuong::getArea()
{
	return (longEdge + shortEdge) * height / 2;
}

double HinhThangVuong::getCirc()
{
	double e = sqrt(pow((longEdge - shortEdge), 2) + pow(height, 2));
	return longEdge + shortEdge + height + e;
}