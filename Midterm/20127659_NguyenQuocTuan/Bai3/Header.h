#include<iostream>
using namespace std;

class PhanSo
{
private:
	int nume, deno;
public:
	PhanSo();
	PhanSo(int nume);
	PhanSo(int nume, int deno);
	friend PhanSo operator+(const PhanSo& ps1,const PhanSo& ps2);
	friend PhanSo operator-(const PhanSo& ps1, const PhanSo& ps2);
	friend ostream& operator<<(ostream& os, const PhanSo& ps);
};