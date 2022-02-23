#pragma once
#include "Shape3D.h"
class HinhLapPhuong: public Shape3D
{
private:
	double edge;
public:
	HinhLapPhuong();
	HinhLapPhuong(const double& edge);
	~HinhLapPhuong();

	double getArea();
	double getVolume();

	void input();
	void print();
};

