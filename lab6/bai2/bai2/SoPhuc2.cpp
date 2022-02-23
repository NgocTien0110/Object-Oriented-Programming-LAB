#include "SoPhuc2.h"
#include <cmath>
#include<string>

SoPhuc2::SoPhuc2() : SoPhuc1() {}
SoPhuc2::SoPhuc2(const double& thuc) : SoPhuc1(thuc) {}
SoPhuc2::SoPhuc2(const double& thuc, const double& ao) : SoPhuc1(thuc, ao) {}

double SoPhuc2::modul(const SoPhuc2& sp)
{
	return sqrt(sp.thuc * sp.thuc + sp.ao * sp.ao);
}

SoPhuc2 operator +(const SoPhuc2& sp1, const SoPhuc2& sp2)
{
	double thuc = sp1.thuc + sp2.thuc;
	double ao = sp1.ao + sp2.ao;
	
	return SoPhuc2(thuc, ao);
}

SoPhuc2 operator -(const SoPhuc2& sp1, const SoPhuc2& sp2)
{
	double thuc = sp1.thuc - sp2.thuc;
	double ao = sp1.ao - sp2.ao;

	return SoPhuc2(thuc, ao);
}

SoPhuc2 operator *(const SoPhuc2& sp1, const SoPhuc2& sp2)
{
	double thuc = sp1.thuc * sp2.thuc - sp1.ao * sp2.ao;
	double ao = sp1.thuc * sp2.ao + sp1.ao * sp2.thuc;

	return SoPhuc2(thuc, ao);
}

SoPhuc2 operator /(const SoPhuc2& sp1, const SoPhuc2& sp2)
{
	double tu1 = sp1.thuc * sp2.thuc + sp1.ao * sp2.ao;
	double tu2 = sp1.ao * sp2.thuc - sp1.thuc * sp2.ao;
	double mau = sp2.thuc * sp2.thuc + sp2.ao * sp2.ao;
	double thuc = tu1 / mau;
	double ao = tu2 / mau;

	return SoPhuc2(thuc, ao);
}

bool operator > (const SoPhuc2& sp1, const SoPhuc2& sp2)
{
	return (sp1.modul(sp1) > sp2.modul(sp2)) ? true : false;
}

bool operator < (const SoPhuc2& sp1, const SoPhuc2& sp2)
{
	return (sp1.modul(sp1) < sp2.modul(sp2)) ? true : false;
}

bool operator >= (const SoPhuc2& sp1, const SoPhuc2& sp2)
{
	return (sp1.modul(sp1) >= sp2.modul(sp2)) ? true : false;
}

bool operator <= (const SoPhuc2& sp1, const SoPhuc2& sp2)
{
	return (sp1.modul(sp1) <= sp2.modul(sp2)) ? true : false;
}

bool operator == (const SoPhuc2& sp1, const SoPhuc2& sp2)
{
	return (sp1.modul(sp1) == sp2.modul(sp2)) ? true : false;
}

bool operator != (const SoPhuc2& sp1, const SoPhuc2& sp2)
{
	return (sp1 == sp2) ? false : true;
}

SoPhuc2& SoPhuc2::operator++()
{
	this->thuc++;
	return *this;
}
SoPhuc2 SoPhuc2::operator--()
{
	this->thuc--;
	return *this;
}

istream& operator>>(istream& is, SoPhuc2& ps)
{
	cout << "nhap phan thuc: ";
	is >> ps.thuc;	
	cout << "nhap phan ao: ";
	is >>ps.ao;

	return is;
}

ostream& operator << (ostream& os, const SoPhuc2& sp)
{
	string s = (sp.thuc == (int)sp.thuc) ? to_string((int)sp.thuc) : to_string(sp.thuc);
	if (sp.ao == 0)
		return os << s;
	else if (sp.ao > 0)
	{
		s+= "+";
		s+= (sp.ao == (int)sp.ao) ? to_string((int)sp.ao) : to_string(sp.ao);			
		s+= "i";
		return os << s;
	}
	else
	{
		s += (sp.ao == (int)sp.ao) ? to_string((int)sp.ao) : to_string(sp.ao);
		s+= "i";
		return os << s;
	}
}