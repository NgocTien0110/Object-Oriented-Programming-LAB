#include "SoNguyen.h"

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

bool operator < (const SoNguyen& a, const SoNguyen& b)
{
	return (a.v < b.v) ? true : false;
}
bool operator > (const SoNguyen& a, const SoNguyen& b)
{
	return (a.v > b.v) ? true : false;
}
bool operator == (const SoNguyen& a, const SoNguyen& b)
{
	return (a.v == b.v) ? true : false;
}
istream& operator >> (istream& is, SoNguyen& sn)
{
	is >> sn.v;
	return is;
}
ostream& operator << (ostream& os, const SoNguyen& sn)
{
	os << sn.v;
	return os;
}
