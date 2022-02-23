#pragma once
#include "Shape2D.h"

class HinhChuNhat : public Shape2D
{
private:
	double length, width;
public:
	HinhChuNhat();
	HinhChuNhat(const double& length, const double& width);
	~HinhChuNhat();

	double getArea();
	double getCirc();

	void input();
	void print();
};

