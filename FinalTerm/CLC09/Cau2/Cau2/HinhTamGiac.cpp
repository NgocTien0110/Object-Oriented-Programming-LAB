#include "HinhTamGiac.h"

void HinhTamGiac::nhap()
{
	/*bool check = true;
	do
	{*/
		cout << "Nhap diem a: " << endl;
		a.nhap();
		cout << "Nhap diem b: " << endl;
		b.nhap();
		cout << "Nhap diem c: " << endl;
		c.nhap();

		ab = a.khoangCach(b);
		ac = a.khoangCach(c);
		bc = b.khoangCach(c);
		/*cout << ab << ac << bc << endl;
		if ((ab + ac) < bc || (ab + bc) < ac || (bc + ac) < ab)
		{
			cout << "Tam Giac khong ton tai. nhap lai: " << endl;
			check = false;
		}*/

	//} while (!check);
}

double HinhTamGiac::chuVi()
{
	return ab + ac + bc;
}
double HinhTamGiac::dienTich()
{
	double p = (ab + ac + bc) / 2;
	return sqrt(p * (p - ab) * (p - ac) * (p - bc));
}

bool HinhTamGiac::catTrucHoanh()
{
	if (a.trenTrucHoanh() * b.trenTrucHoanh() < 0 
		|| a.trenTrucHoanh() * c.trenTrucHoanh() < 0
		|| b.trenTrucHoanh() * c.trenTrucHoanh() < 0)
		return true;
	return false;
}

void HinhTamGiac::xuat()
{
	cout << "Hinh Tam Giac: Co S = " << this->dienTich()
		<< " ,Co P = " << this->chuVi() << endl;
}

