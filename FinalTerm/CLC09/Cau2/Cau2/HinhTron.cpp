#include "HinhTron.h"

void HinhTron::nhap()
{
	cout << "Nhap tam: " << endl;
	o.nhap();
	cout << "Nhap ban kinh: ";
	cin >> r;
}

double HinhTron::dienTich()
{
	return PI * r * r;
}

double HinhTron::chuVi()
{
	return 2 * PI * r;
}

bool HinhTron::catTrucHoanh()
{
	if (o.trenTrucHoanh() * (o.trenTrucHoanh() + r) < 0
		|| o.trenTrucHoanh() * (o.trenTrucHoanh() - r) < 0)
		return true;
	return false;
}

void HinhTron::xuat()
{
	cout << "Hinh Tron: Co S = " << dienTich()
		<< ", Co P = " << chuVi() << endl;
}