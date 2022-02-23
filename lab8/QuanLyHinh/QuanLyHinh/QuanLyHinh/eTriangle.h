#pragma once
#include "Shape2D.h"
class HinhTamGiacDeu : public Shape2D
{
private:
	double edge;
public:
	HinhTamGiacDeu();
	HinhTamGiacDeu(const double& edge);
	~HinhTamGiacDeu();

	double getArea();
	double getCirc();

	void input();
	void print();
};

