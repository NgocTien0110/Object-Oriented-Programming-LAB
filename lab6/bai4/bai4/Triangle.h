#pragma once
#include "Shape.h"

class HinhTamGiac : public Shape
{
private:
	double edge1, edge2, edge3;
public:
	HinhTamGiac();
	HinhTamGiac(const double& edge1, const double& edge2, const double& edge3);
	~HinhTamGiac();

	double getArea();
	double getCirc();
};