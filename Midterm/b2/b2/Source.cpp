#include "Header.h"

int SoNguyen::min = 2147483647;

SoNguyen::SoNguyen()
{
	this->v = 0;
}

SoNguyen::SoNguyen(int val)
{
	this->v = val;
	if (val < this->min)
		this->min = val;
}

SoNguyen::~SoNguyen(){}

int SoNguyen::getValue()
{
	return v;
}

int SoNguyen::MinInt()
{
	return min;
}

bool operator >(const SoNguyen& a, const SoNguyen& b)
{
	return a.v > b.v ? true : false;
}

bool operator <(const SoNguyen& a, const SoNguyen& b)
{
	return a.v < b.v ? true : false;
}

ostream& operator << (ostream& os, const SoNguyen& sn)
{
	return os << sn.v;
}

istream& operator >> (istream& is, SoNguyen& sn)
{
	is >> sn.v;
	if (sn.v < sn.min)
		sn.min = sn.v;
	return is;
}
