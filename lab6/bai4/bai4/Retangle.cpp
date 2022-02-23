#include "Retangle.h"

HinhChuNhat::HinhChuNhat() :Shape(), length(0), width(0) {}
HinhChuNhat::HinhChuNhat(const double& length, const double& width) : Shape()
{	
	this->length = abs(length);
	this->width = abs(width);
}
HinhChuNhat::~HinhChuNhat() {}

double HinhChuNhat::getArea()
{
	return length * width;
}

double HinhChuNhat::getCirc()
{
	return 2 * (length + width);
}
