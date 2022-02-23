#include "eTriangle.h"

HinhTamGiacDeu::HinhTamGiacDeu()
{
	this->input();
}
HinhTamGiacDeu::HinhTamGiacDeu(const double& edge)
{
	this->edge = edge;
}
HinhTamGiacDeu::~HinhTamGiacDeu(){}

double HinhTamGiacDeu::getArea()
{
	return edge * edge * sqrt(3) / 4;
}

double HinhTamGiacDeu::getCirc()
{
	return 3 * edge;
}

void HinhTamGiacDeu::input()
{
	cout << "nhap canh a > 0 = ";
	cin >> edge;
	while (edge < 0)
	{
		cout << "nhap canh a > 0 = ";
		cin >> edge;
	}
}

void HinhTamGiacDeu::print()
{
	cout << "Hinh Tam Giac Deu (a = " << edge << ") co P = "
		<< this->getCirc() << " co S = "
		<< this->getArea() << endl;
}

