#pragma once
#include "Shape2D.h"
class HinhVuong : public Shape2D
{
private:
	double edge;
public:
	HinhVuong();
	HinhVuong(const double& edge);
	~HinhVuong();

	double getArea();
	double getCirc();

	void input();
	void print();
};

