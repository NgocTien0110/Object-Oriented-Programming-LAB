#include"Header.h"

int GCD(int a, int b) //Tim Uoc chung lon nhat cua 2 gia tri
{
	if (b == 0) return a;
	return GCD(b, a % b);
}

void RutGonPhanSo(int& nume, int& deno) //Ham gium ta rut gon gia tri cua 2 phan tu khi truyen vao
{
	int UCLN = GCD(nume, deno);
	nume /= UCLN;
	deno /= UCLN;
}

PhanSo::PhanSo() //Khoi tao tu so = 0 , mau = 1
{
	nume = 0;
	deno = 1;
}

PhanSo::PhanSo(int nume) //Gan tu so va cho mau so = 1
{
	this->nume = nume;
	this->deno = 1;
}

PhanSo::PhanSo(int nume, int deno)  //Gan tu so va mau so va rut gon chung
{
	this->nume = nume;
	this->deno = deno;
	RutGonPhanSo(this->nume, this->deno);
}

PhanSo operator+(const PhanSo& ps1, const PhanSo& ps2)
{
	PhanSo result;
	result.nume = ps1.nume * ps2.deno + ps1.deno * ps2.nume; 
	result.deno = ps1.deno * ps2.deno;
	RutGonPhanSo(result.nume, result.deno); //Rut gon Phan So
	return result;
}

PhanSo operator-(const PhanSo& ps1, const PhanSo& ps2)
{
	PhanSo result;
	result.nume = ps1.nume * ps2.deno - ps1.deno * ps2.nume;
	result.deno = ps1.deno * ps2.deno;
	RutGonPhanSo(result.nume, result.deno); //Rut gon phan so
	return result;
}

ostream& operator<<(ostream& os, const PhanSo& ps)
{
	os << ps.nume << "/" << ps.deno;
	return os;
}