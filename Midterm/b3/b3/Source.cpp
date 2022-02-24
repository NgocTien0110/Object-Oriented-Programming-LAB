#include "Header.h"


unsigned int PhanSo::gcd(unsigned int n1, unsigned int n2)
{
    return (n2 == 0) ? n1 : gcd(n2, n1 % n2);
}

PhanSo::PhanSo()
{
    this->numerator = 0;
    this->denominator = 1;
}
PhanSo::PhanSo(int i)
{
    this->numerator = i;
    this->denominator = 1;
}
PhanSo::PhanSo(int nu, int de)
{
    int ucln = gcd(abs(nu), abs(de));
    this->numerator = (nu * de >= 0) ? abs(nu / ucln) : -abs(nu / ucln);
    this->denominator = (de >= 0) ? de / ucln : -de / ucln;
}

PhanSo operator+(const PhanSo& a, const PhanSo& b)
{
    int nu = a.numerator * b.denominator + b.numerator * a.denominator;
    int de = a.denominator * b.denominator;
    return PhanSo(nu, de);
}
PhanSo operator-(const PhanSo& a, const PhanSo& b)
{
    int nu = a.numerator * b.denominator - b.numerator * a.denominator;
    int de = a.denominator * b.denominator;
    return PhanSo(nu, de);
}

ostream& operator<<(ostream& os, const PhanSo& f)
{
    if (f.denominator == 1)
        os << f.numerator;
    else
        os << f.numerator << "/" << f.denominator;
    return os;
}