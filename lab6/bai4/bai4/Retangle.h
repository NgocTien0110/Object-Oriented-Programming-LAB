#include "Shape.h"

class HinhChuNhat: virtual public Shape
{
private:
	double length, width;
public:
	HinhChuNhat();
	HinhChuNhat(const double& length, const double& width);
	~HinhChuNhat();

	double getArea();
	double getCirc();
};