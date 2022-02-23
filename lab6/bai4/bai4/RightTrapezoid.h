#pragma once
#include "Shape.h"

class HinhThangVuong :public Shape
{
private:
	double longEdge, shortEdge;
	double height;
public:
	HinhThangVuong();
	HinhThangVuong(const double& longEdge, const double& shortEdge, const double& height);
	~HinhThangVuong();

	double getArea();
	double getCirc();
};