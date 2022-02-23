#include "Globular.h"

HinhCau::HinhCau()
{
	this->input();
}
HinhCau::HinhCau(const double& radius)
{
	this->radius = radius;
}
HinhCau::~HinhCau(){}

double HinhCau::getArea()
{
	return 4 * PI * radius * radius;
}

double HinhCau::getVolume()
{
	return 4 * PI * radius * radius * radius / 3;
}

void HinhCau::input()
{
	cout << "nhap ban kinh R > 0 : ";
	cin >> radius;
	while (radius < 0)
	{
		cout << "nhap ban kinh R > 0 : ";
		cin >> radius;
	}
}

void HinhCau::print()
{
	cout << "Hinh Cau (R = " << radius << ") co S = "
		<< this->getArea() << " co V = "
		<< this->getVolume() << endl;
}
