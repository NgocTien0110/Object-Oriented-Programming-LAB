#include "Cube.h"

HinhLapPhuong::HinhLapPhuong()
{
	this->input();
}
HinhLapPhuong::HinhLapPhuong(const double& edge)
{
	this->edge = edge;
}
HinhLapPhuong::~HinhLapPhuong(){}

double HinhLapPhuong::getArea()
{
	return 6 * edge * edge;
}

double HinhLapPhuong::getVolume()
{
	return edge * edge * edge;
}

void HinhLapPhuong::input()
{
	cout << "nhap canh a > 0: ";
	cin >> edge;
	while (edge < 0)
	{
		cout << "nhap canh a > 0: ";
		cin >> edge;
	}
}

void HinhLapPhuong::print()
{
	cout << "Hinh Lap Phuong (a = " << edge << ") co S = "
		<< this->getArea() << " co V = "
		<< this->getVolume() << endl;
}
