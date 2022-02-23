#include "Square.h"

HinhVuong::HinhVuong()
{
	this->input();
}
HinhVuong::HinhVuong(const double& edge)
{
	this->edge = edge;
}
HinhVuong::~HinhVuong(){}

double HinhVuong::getArea()
{
	return edge * edge;
}
double HinhVuong::getCirc()
{
	return 4 * edge;
}

void HinhVuong::input()
{
	cout << "nhap canh a > 0 : ";
	cin >> edge;
	while (edge < 0)
	{
		cout << "nhap canh a > 0 = ";
		cin >> edge;
	}
}
void HinhVuong::print()
{
	cout << "Hinh Vuong (a = " << edge << ") co P = "
		<< this->getCirc() << " co S = "
		<< this->getArea() << endl;
}
