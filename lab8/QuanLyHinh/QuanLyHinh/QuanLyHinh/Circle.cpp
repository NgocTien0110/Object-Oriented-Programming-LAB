#include "Circle.h"

HinhTron::HinhTron() 
{
	this->input();
}
HinhTron::HinhTron(const double& radius) 
{
	this->radius = radius;
}
HinhTron::~HinhTron() {}

double HinhTron::getArea()
{
	return PI * radius * radius;
}

double HinhTron::getCirc()
{
	return 2 * PI * radius;
}

void HinhTron::input()
{
	cout << "nhap ban kinh r > 0 : ";
	cin >> radius;
	while (radius < 0)
	{
		cout << "nhap ban kinh r > 0 : ";
		cin >> radius;
	}
}
void HinhTron::print()
{
	cout << "Hinh Tron (r = " << radius << ") co P = "
		<< this->getCirc() << " co S = "
		<< this->getArea() << endl;
}