#include"Header.h"

SoNguyen::SoNguyen()
{
	v = 0;
}

SoNguyen::SoNguyen(int val)
{
	v = val;
}

int SoNguyen::getValue()
{
	return v;
}

bool SoNguyen::operator>(const SoNguyen& sn)
{
	if (this->v > sn.v)
		return true;
	return false;
}

bool SoNguyen::operator<(const SoNguyen& sn)
{
	if (this->v < sn.v)
		return true;
	return false;
}

istream& operator>>(istream& is, SoNguyen& sn)
{
	is >> sn.v;
	if (SoNguyen::minValue > sn) //Khi nhap vao phan tu mang, ta check xem no co nho hon bien static minValue khong, neu nho hon thi cap nhat static minValue
		SoNguyen::minValue = sn;
	return is; 
}

ostream& operator<<(ostream& os, const SoNguyen& sn)
{
	os << sn.v;
	return os;
}

SoNguyen SoNguyen::minValue = SoNguyen(999999999); //Set gia tri minValue rat lon de phuc vu cho viec tim minValue

SoNguyen SoNguyen::minSoNguyenInArray() //Xuat gia tri nho nhat trong  Mang SO Nguyen
{
	return minValue;
}