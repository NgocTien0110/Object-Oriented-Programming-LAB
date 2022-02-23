#pragma once
#include "Shape3D.h"
#define PI 3.14159

class HinhCau: public Shape3D
{
private:
	double radius;
public:
	HinhCau();
	HinhCau(const double& radius);
	~HinhCau();

	double getArea();
	double getVolume();

	void input();
	void print();
};

