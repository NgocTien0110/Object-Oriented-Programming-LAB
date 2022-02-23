#pragma once
#include "Shape2D.h"
#define PI 3.14159

class HinhTron : public Shape2D
{
private:
	double radius;
public:
	HinhTron();
	HinhTron(const double& radius);
	~HinhTron();

	double getArea();
	double getCirc();

	void input();
	void print();
};