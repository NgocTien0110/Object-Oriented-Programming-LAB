#include "Triangle.h"

HinhTamGiac::HinhTamGiac(): Shape(), edge1(0), edge2(0), edge3(0) {}
HinhTamGiac::HinhTamGiac(const double& edge1, const double& edge2, const double& edge3) : Shape()
{
	this->edge1 = abs(edge1);
	this->edge2 = abs(edge2);
	this->edge3 = abs(edge3);
}
HinhTamGiac::~HinhTamGiac() {}

double HinhTamGiac::getArea()
{
	double p = (edge1 + edge2 + edge3) / 2;
	return sqrt(p * (p - edge3) * (p- edge2) * (p - edge1));
}

double HinhTamGiac::getCirc()
{
	return edge1 + edge2 + edge3;
}