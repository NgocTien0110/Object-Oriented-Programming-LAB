#pragma once
#include "NhanVien.h"

NhanVien::NhanVien() 
	: Nguoi(), department(""), cSalary(0), subsidy(0) {}
NhanVien::NhanVien(const string& name, const string& address, const string& BoD, const string& department, const double& cSalary, const double& subsidy)
	: Nguoi(name, address, BoD)
{
	this->department = department;
	this->cSalary = cSalary;
	this->subsidy = subsidy;
}
NhanVien::~NhanVien() {}

istream& operator >> (istream& is, NhanVien& nv)
{
	is >> (Nguoi&)nv;
	cout << "Nhap phong ban: ";
	getline(is, nv.department);
	cout << "Nhap he so luong: ";
	is >> nv.cSalary;
	cout << "Nhap phu cap: ";
	is >> nv.subsidy;
	return is;
}
ostream& operator << (ostream& os, const NhanVien& nv)
{
	os << (Nguoi)nv;
	os << "Phong ban: " << nv.department << endl;
	os << "Luong: " << LUONG * nv.cSalary + nv.subsidy << endl;
	return os;
}


