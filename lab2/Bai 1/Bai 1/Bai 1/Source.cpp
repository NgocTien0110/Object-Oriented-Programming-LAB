#include "Header.h"

int HocSinh::sl = 0;
HocSinh HocSinh::DTBMax{};

HocSinh::HocSinh()
{
	name = "";
	mssv = 1363001 + sl;
	point.dtb = point.toan = point.li = point.hoa = 0;
	sl++;
}

HocSinh::HocSinh(const string& ten, const double& toan, const double& li, const double& hoa)
{
	name = ten;
	mssv = 1363001 + sl;
	point.toan = abs(toan);
	point.li = abs(li);
	point.hoa = abs(hoa);
	point.dtb = (point.toan + point.li + point.hoa) / 3;
	if (point.dtb > DTBMax.point.dtb)
	{
		DTBMax.name = name;
		DTBMax.mssv = mssv;
		DTBMax.point.dtb = point.dtb;
		DTBMax.point.toan = point.toan;
		DTBMax.point.li = point.li;
		DTBMax.point.hoa = point.hoa;
	}
	sl++;
}

HocSinh::~HocSinh()
{
}

void HocSinh::DatHoTen(const string& ten)
{
	name = ten;
}

void HocSinh::GanDiem(const double& toan, const double& li, const double& hoa)
{
	point.toan = abs(toan);
	point.li = abs(li);
	point.hoa = abs(hoa);
	point.dtb = (point.toan + point.li + point.hoa) / 3;
	if (point.dtb > DTBMax.point.dtb)
	{
		DTBMax.name = name;
		DTBMax.mssv = mssv;
		DTBMax.point.dtb = point.dtb;
		DTBMax.point.toan = point.toan;
		DTBMax.point.li = point.li;
		DTBMax.point.hoa = point.hoa;
	}
}

string HocSinh::HSDiemTBCaoNhat()
{
	return "HS: " + DTBMax.name + ", MS: " + to_string(DTBMax.mssv) + ", DTB: " + to_string(DTBMax.point.dtb);
}

ostream& operator << ( ostream& os, const HocSinh& hs)
{
	os << "HS: " << hs.name <<
		", MS: " << hs.mssv << ", DTB: " << hs.point.dtb;
	return os;
}
