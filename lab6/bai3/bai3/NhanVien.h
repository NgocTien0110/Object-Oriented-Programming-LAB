#pragma once
#include "Nguoi.h"

// e cho luong co ban la 1000 nha 
#define LUONG 1000

class NhanVien :public Nguoi
{
private:
	string department;
	double cSalary;
	double subsidy;
public:
	NhanVien();
	NhanVien(const string& name, const string& address, const string& BoD, const string& department, const double& cSalary, const double& subsidy);
	~NhanVien();

	friend istream& operator >> (istream& is, NhanVien& nv);
	friend ostream& operator << (ostream& os, const NhanVien& nv);
};