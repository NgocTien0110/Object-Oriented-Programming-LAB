#include "Header.h"

// PS1
PS1::PS1() 
{
	this->tu = 0;
	this->mau = 1;
}

PS1::PS1(int i)
{
    this->tu = i;
    this->mau = 1;
}
PS1::PS1(int nu, int de)
{
    int ucln = gcd(abs(nu), abs(de));
    this->tu = (nu * de >= 0) ? abs(nu / ucln) : -abs(nu / ucln);
    this->mau = (de >= 0) ? de / ucln : -de / ucln;
}

void PS1::nhapPS()
{
	int t, m;
	cout << "nhap tu so: ";
	cin >> t;
	this->tu = t;

	cout << "nhap mau so: ";
	cin >> m;
	this->mau = m;

	this->toiGian();
}

unsigned int PS1::gcd(unsigned int n1, unsigned int n2)
{
	return (n2 == 0) ? n1 : gcd(n2, n1 % n2);
}

void PS1::toiGian()
{
	int ucln = gcd(abs(this->tu), abs(this->mau));
	this->tu = (this->tu * this->mau >= 0) ? abs(this->tu / ucln) : -abs(this->tu / ucln);
	this->mau = (this->mau >= 0) ? this->mau / ucln : -this->mau / ucln;
}

string PS1::inPS()
{
	string s="";
	if (mau == 1)
		s = to_string(tu);
	else
		s = to_string(tu) + "/" + to_string(mau);

	return s;
}

PS1 operator+(const PS1& ps1, const PS1& ps2)
{
    PS1 p;
    p.tu = ps1.tu * ps2.mau + ps1.mau * ps2.tu;
    p.mau = ps1.mau * ps2.mau;
    p.toiGian();
    return p;
}



// PS2
PS2 operator-(const PS2& ps1, const PS2& ps2) 
{
    PS2 p;
    p.tu = ps1.tu * ps2.mau - ps1.mau * ps2.tu;
    p.mau = ps1.mau * ps2.mau;
    p.toiGian();
    return p;
}

PS2 operator*(const PS2& ps1, const PS2& ps2) 
{
    PS2 p;
    p.tu = ps1.tu * ps2.tu;
    p.mau = ps1.mau * ps2.mau;
    p.toiGian();
    return p;
}

PS2 operator/(const PS2& ps1, const PS2& ps2)
{
    PS2 p;
    p.tu = ps1.tu * ps2.mau;
    p.mau = ps1.mau * ps2.tu;
    p.toiGian();
    return p;
}

bool operator>(const PS2& ps1, const PS2& ps2) 
{
    return (ps1.tu * ps2.mau > ps1.mau * ps2.tu) ? true : false;
}

bool operator>=(const PS2& ps1, const PS2& ps2)
{
    return (ps1.tu * ps2.mau >= ps1.mau * ps2.tu) ? true : false;
}

bool operator<(const PS2& ps1, const PS2& ps2) 
{
    return (ps1.tu * ps2.mau < ps1.mau* ps2.tu) ? true : false;
}

bool operator<=(const PS2& ps1, const PS2& ps2)
{
    return (ps1.tu * ps2.mau <= ps1.mau * ps2.tu) ? true : false;
}

bool operator==(const PS2& ps1, const PS2& ps2)
{
    return (ps1.tu * ps2.mau == ps1.mau * ps2.tu) ? true : false;
}

bool operator!=(const PS2& ps1, const PS2& ps2)
{
    return (ps1.tu * ps2.mau != ps1.mau * ps2.tu) ? true : false;
}

PS2 PS2::operator++()
{
    this->tu = this->tu + this->mau;
    this->toiGian();
    return *this;
}

PS2 PS2::operator--()
{
    this->tu = this->tu - this->mau;
    this->toiGian();
    return *this;
}

ostream& operator << (ostream& os, const PS2& ps) {
    if (ps.mau == 1)
        os << ps.tu;
    else
        os << ps.tu << "/" << ps.mau;
    return os;
}

istream& operator >> (istream& is, PS2& ps) {
    int tu, mau;
    cout << "nhap tu so: ";
    is >> ps.tu;
    cout << "nhap mau so: ";
    is >> ps.mau;
    ps.toiGian();
    return is;
}