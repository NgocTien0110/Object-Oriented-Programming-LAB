#include "HinhChuNhat.h"

void HinhChuNhat::nhap()
{
	cout << "Nhap diem a: " << endl;
	a.nhap();
	cout << "Nhap diem b: " << endl;
	b.nhap();
	cout << "Nhap diem c: " << endl;
	c.nhap();
	cout << "Nhap diem d: " << endl;
	d.nhap();

	ab = a.khoangCach(b);
	bc = b.khoangCach(c);
	cd = c.khoangCach(d);
	da = d.khoangCach(a);
}

double HinhChuNhat::dienTich()
{
	return ab * da;
}

double HinhChuNhat::chuVi()
{
	return 2 * (ab + da);
}

bool HinhChuNhat::catTrucHoanh()
{
	if (a.trenTrucHoanh() * d.trenTrucHoanh() < 0
		|| a.trenTrucHoanh() * b.trenTrucHoanh() < 0
		|| c.trenTrucHoanh() * d.trenTrucHoanh() < 0
		|| c.trenTrucHoanh() * b.trenTrucHoanh() < 0)
		return true;
	return false;
}

void HinhChuNhat::xuat()
{
	cout << "Hinh Chu Nhat: Co S = " << dienTich()
		<< ",  Co P = " << chuVi() << endl;
}